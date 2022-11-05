#include<iostream>
using namespace std;

class Baseclass{
	public:
		int var_base=1;
	virtual	void display()
		{
			cout<<"Dispalying base class vatiable var_base "<<var_base<<endl;
		}
};

class Derivedclass :public Baseclass
{
	public:
		int var_derived=2;
		void display()
		{
			cout<<"Dispalying base class vatiable var_base "<<var_base<<endl;
			cout<<"Dispalying derived class vatiable derived_base "<<var_derived<<endl;
		}
};
int main()
{
	Baseclass *base_class_pointer;
    Baseclass obj_base;
	Derivedclass obj_derived;
	base_class_pointer = &obj_derived;
	base_class_pointer->display();
}


/*
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display(){}
};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    
class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
*/
//1 They cannot be static
//2 They are accessed by object pointers
//3 Vi3rtual functions can be a friend of another class
//4 A virtual function in the base class might not be used.
//5 If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
