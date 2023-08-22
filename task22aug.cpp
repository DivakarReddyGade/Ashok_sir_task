#include<iostream>
using namespace std;
//22A91A05H5
class College{
		public:
			void campus(int number)
			{
				no=number;
			}
			int value(int number)
			{
				return number;
			}
		string name,branch,section,rollno;
		int year;
		float percentage;
		College()
		{
			name="Divakar Reddy";
			branch="CSE";
			section="C";
			rollno="22a91a05h5";
			year=2;
			percentage=83.56;
		}
		void display()
		{
			cout<<name<<" "<<branch<<" "<<section<<endl;
			cout<<rollno<<" "<<year<<" "<<percentage<<endl;
		}
		private:
			string no;
			string pin;
			int room;
		
};
int main()
{
	College s1;
	College s2;
	cout<<s2.value(106)<<endl;
	s1.display();
	s2.display();
	return 0;
}
