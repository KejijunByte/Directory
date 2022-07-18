#include"Header/Ref.h"
#include"Header/ASCII.h"

int main(int argc,char *argv[]){
    using namespace Cpp::FileIO;
    using namespace Cpp::IO;
    if(argc==1){
        cerr<<"No input directory.\n";
        cout<<"USAGE: \n"
        <<_tab1<<argv[0]<<" [DIR]\n";
    }
    if(argc==2){

    path path1(argv[1]);
        if(!exists(path1)){
            cerr<<_bel<<argv[1]<<" is not exists.\n"
            <<"File not found.\n";
            return 1;
        }

    directory_entry et(path1);
        if(et.status().type()==file_type::directory){
            cout<<"That is a directory.\n";}

    cout<<"Here is your directory \""<<argv[1]<<"\"\n";
    directory_iterator lst(path1);
    int filenum=0;//Record the files and folders.
        for(auto& it:lst){
            cout<<_tab1<<it.path().filename()<<"   ";//Show the files & folders name
            filenum++;
        if(filenum %7==0){cout<<endl;}
        }
        cout<<"\n\t"<<filenum<<" File(s) & folder(s)\n";//Show the files & folders number
        filenum=0;//Reset the number
    }
    return 0;
}