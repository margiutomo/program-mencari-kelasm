#include <iostream>
#include <conio.h>

using namespace std;

class jml{
    private :
         int nim;
         
    public :
        void mahasiswa(){
            cout<<" . Masukan NIM anda 4 digit = ";cin>>nim;
              if(nim>1000&&nim<1500)
              {
             cout<<"anda berada di kelas informatika "<<endl;
             }
          else if (nim>1500&&nim<1900)
                {
             cout<<"anda berada di kelas ekonomi "<<endl;
             }     
		else{
			cout<<"nim anda tidak terdaftar";
		}
        }
};

int main()
{
        jml n;
        n.mahasiswa();
        

     getch();
}
