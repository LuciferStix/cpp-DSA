#include <iostream>
#include <map>

// int main(){
//     typedef int arr [3] ;
//     arr array={1,2,3};
//     for (int i = 0; i < 3; i++)
//     {
//         std::cout<<array[i]<<std::endl;
//     }

//     return 0;
// }

class Calculate
{
private:
    int a, b;

public:
    Calculate(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    int add(int a, int b) { return a + b; }
    int multiply(int a, int b) { return a * b; }

};

class user_program{
    public :
        // user_program(Calculate* myclass){

        // }
};

int main()
{
    typedef int (*fnptr)(int, int);

    std::map<int, std::string> names;
    std::map<std::string, fnptr> mymap;

    // names[1]="akarsit singh";
    // names[2]="jack";
    // for (int i = 1; i < names.size(); i++)
    // {
    //     std::cout<<names[i]<<std::endl;
    // }

    std::string s;
    s = "add";
    int res = mymap[s](3, 5);
    std::cout << res;
    std::cout<<"done";

    return 0;
}




//need to create a generealized user input program 
    // params :  object (class/function ) , 
                //  param1,param2....{ related to object } 
                // list of methods inside the object 

// idea:

    //  user -side
    // create an user-program instance

    // class userSide{
    //     constructor ...
    //     ...
    //     ...
    // }

    // return-data-type (*fptr) (params datatype)

    // userSide *instance

    // function returning class pointer






    // dev side

    // class userInput{

        // constructor (funct pointer fptr{--> pointing to user created class or function} , list of methods used inside class)
    // }


