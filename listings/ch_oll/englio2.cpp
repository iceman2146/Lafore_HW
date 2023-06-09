// englio2.cpp
// ������������� �������� << � >> ����� �������� � �������
#include <fstream>
#include <iostream>
using namespace std;
class Distance                // ����� ���������� ����������
{
private:
	int feet;
	float inches;
public: 
	// ����������� (��� ����������)
	Distance() : feet(0), inches(0.0) 
	{  } 
	// ����������� (2-���)
	Distance(int ft, float in) : feet(ft), inches(in) 
	{  }
	friend istream& operator>>(istream& s, Distance& d);
	friend ostream& operator<<(ostream& s, Distance& d);
};
//---------------------------------------------------------
// ��������  ������ �� ����� ��� � ����������
// ��� ('), (-) � (") � ������� �������������� >>
istream& operator>>(istream& s, Distance& d)
  {
	  char dummy;           	                        
	  s >> d.feet >> dummy >> dummy >> d.inches >> dummy;
	  return s;
  }
  //---------------------------------------------------------
  // �������  ������ ���� Distance � ���� ��� �� ����� ������������� <<
ostream& operator<<(ostream& s, Distance& d)
  {
	  s << d.feet << "\'-" << d.inches << '\"';
	  return s;              
  }
  ///////////////////////////////////////////////////////////
  int main()
  {
	system("chcp 1251 > nul");
  
	  char ch;
	  Distance dist1;
	  ofstream ofile;         // ������� � �������
	  ofile.open("DIST.DAT"); // �������� �����

	  do {
		  cout << "\n������� ����������: ";
		  cin >> dist1;       // �������� ������ �� ������������
		  ofile << dist1;     // �������� �� � �������� �����
		  cout << "���������� (y/n)? ";
		  cin >> ch;
	  } while(ch != 'n');  
	  ofile.close();          // ������� �������� �����

	  ifstream ifile;         // ������� � ������� 
	  ifile.open("DIST.DAT"); // ������� �����

	  cout << "\n���������� �����:\n";
	  while(true)
	  {
		  ifile >> dist1;     // ������ ������ �� ������
		  if(ifile.eof())     // ����� �� EOF
			  break;
		  cout << "���������� = " << dist1 << endl; // �����
													// ����������
	  }

	  return 0;
  }
