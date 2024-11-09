	
// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<string>
#include <iostream>
#include<vector>
#include<fstream>
#include<iomanip>










using namespace std;
const string ClintsFlieName = "Clints.txt";
struct  stClintData
{
	string Name;
	string Phone;
	string AccountNumber;
	string PinCode;
	string AccountBalnce;
	bool MarkForDelete = false;

};

vector<string>SplitString(string str, string seper)
{
	vector<string>VClinets;
	short po = 0;
	string sword;

	while ((po =str.find(seper)) != std::string::npos )
	{
		sword = str.substr(0, po);
		if (sword != "")
		{
			VClinets.push_back(sword);


		}
		str.erase(0, po + seper.length());
	}
	if (sword != "")
	{
		VClinets.push_back(str);

	}
	return VClinets;
}

stClintData ConvertLineToRecord(string line, string seper = "##0")
{
	vector<string>VClients;
	stClintData sClinets;

	VClients = SplitString(line, seper);
	sClinets.Name = VClients[0];
	sClinets.Phone= VClients[1];
	sClinets.AccountNumber = VClients[2];
	sClinets.PinCode = VClients[3];
	sClinets.AccountBalnce= VClients[4];

	return sClinets;


}

string ConvertRecordToLine(stClintData line, string seper = "##0")
{
	string stClientsRecord = "";

	stClientsRecord += line.Name + seper;
	stClientsRecord += line.Phone + seper;
	stClientsRecord += line.AccountNumber + seper;
	stClientsRecord += line.PinCode + seper;
	stClientsRecord += line.AccountBalnce + seper;

	return stClientsRecord;




}




vector<stClintData> LoadDataClientsFormFile(string FileName)
{
	vector<stClintData> VClinets;
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())

	{
		string Line;
		stClintData Clinets;
		while (getline(MyFile, Line))
		{
			Clinets = ConvertLineToRecord(Line);
			VClinets.push_back(Clinets);


		}
		MyFile.close();
	}
	return VClinets;






}

void PrintClinetCard(stClintData Client)
{
	cout << " The Follwing data for client" << endl;
	cout << " name          |   " << Client.Name<<endl;
	cout << " phone         |  " << Client.Phone<<endl;
	cout << " accountNumber |   " << Client.AccountNumber<<endl;
	cout << " pincode       |  " << Client.PinCode<<endl;
	cout << " accountbalance|  " << Client.AccountBalnce<<endl;


}

bool FindClinetByAccountNumber(string AccountNumber, vector<stClintData>vClients, stClintData& Clinet)
{
	
	for (stClintData C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Clinet = C;
			return true;


		}

	}
	return false;
} 

bool MarkClientsForDeleteByAccountNumber(string AccountNumber, vector<stClintData>& VClients)

{
	

	for (stClintData& C : VClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true ;
			return true;

		}
		

	}
	return false;

}

vector<stClintData>SaveClientsDataToFile(string FileName, vector<stClintData> vClients)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);

	string DataLine;
	if (MyFile.is_open())
	{
		for (stClintData C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine <<endl;

			}
		}
		MyFile.close();
	}


	return vClients;
}

bool DeleteClientsByAccountNumber(string AccountNumber, vector<stClintData>& vClients)
{
	stClintData Clients;
	char Answer = 'n';
	if (FindClinetByAccountNumber(AccountNumber,vClients,Clients))
	{
		PrintClinetCard(Clients);
		cout << " are you sure to delete this clients \n";
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{
			MarkClientsForDeleteByAccountNumber(AccountNumber, vClients);
			SaveClientsDataToFile(ClintsFlieName , vClients);

			vClients = LoadDataClientsFormFile(ClintsFlieName);
			cout << " deleted clients successfully \n";
			return true;



		}

	}
	else
	{
		cout << " clients you want to Delated is not found !";
		return false;
	}

}

string ReadAccountNumber()
{
	string  AccountNumber;
	cout << " please inter account number \n";
	cin >> AccountNumber;
	return AccountNumber;


}




int main()
{
	
	string AccountNumber = ReadAccountNumber();
	vector<stClintData> vClients;
	vClients = LoadDataClientsFormFile(ClintsFlieName);

	DeleteClientsByAccountNumber(AccountNumber, vClients);

	

	system("pause>0");

	return 0;
}