#include <iostream>
#include <exception>
#include <cstdlib>
#include <cmath>

using namespace std;


float piFunction(float alpha0, float alpha1, float pop) {
    float pi;

    pi = pop*alpha1 + (alpha0);
    return (pi);
}

float ajFunction(float beta0, float beta1, float beta2, float rfs, float emp) {
    float aj;

    aj = (beta1*rfs) + (beta2*emp) + (beta0);
    return aj;
}

float calculateF_ij(float C_ij) {
    float F_ij;

    F_ij = std::pow(C_ij, -2);
    return (F_ij);
}

float calculateT_ij(float O_i, float D_j, float F_ij, float sum) {
    float T_ij;

    T_ij = (O_i * D_j * F_ij)/(sum);
    return (T_ij);
}

int main()
{
    //float result;
    string operation;
    int n=1;

    cout<< "\n"<<"\n";

    while(n>0){
        cout<<"Enter the calculation you would like to perform (Aj or Pi or Tij or Fij)."<<"\n"
        << "-----------[Press q if you wish to quit]: " <<"\n";
        cin>>operation;
        cout<<"\n";

        if(operation == "pi"){
            float pop;
            float alpha0;
            float alpha1;
            float pi;

            cout << "The formula for obtaining Productions is Pi = pop*alpha1 + alpha0"<< endl;
            cout << "Enter the population (pop) :"<< endl;
            cin >> pop;
            cout<< "\n";
            cout << "Enter the alpha0 :"<< endl;
            cin >> alpha0;
            cout<< "\n";
            cout << "Enter the alpha1 :"<< endl;
            cin >> alpha1;
            cout<< "\n";
            pi = piFunction(alpha0, alpha1, pop);

            cout << "--------------------------------------------"<<"\n"<<"The retrieved productions (Pi) is " << pi << endl<<"--------------------------------------------"<<"\n";        //result = piFunction();
            cout<<"\n"<<"\n";
        }
        else if(operation == "aj"){
            float beta0;
            float beta1;
            float beta2;
            float rfs;
            float emp;
            float aj;

            cout << "The formula to retrieve Attractions is Aj = (beta1*rfs) + (beta2*emp) + beta0." <<"\n"<<"First enter the values of each to calculate."<< endl;
            cout << "Enter the beta0 :"<< endl;
            cin >> beta0;
            cout<< "\n";
            cout << "Enter the beta1 :"<< endl;
            cin >> beta1;
            cout<< "\n";
            cout << "Enter the beta2 :"<< endl;
            cin >> beta2;
            cout<< "\n";
            cout << "Enter the rfs :"<< endl;
            cin >> rfs;
            cout<< "\n";
            cout << "Enter the emp :"<< endl;
            cin >> emp;
            cout<< "\n";
            //pi = piFunction(alpha, alpha2, pop);
            aj = ajFunction(beta0, beta1, beta2, rfs, emp);

            cout << "--------------------------------------------"<<"\n"<<"The retrieved attractions (Aj) is " << aj << endl<<"--------------------------------------------"<<"\n";        //result = piFunction();
            cout<<"\n"<<"\n";
        }
        else if(operation == "Fij"){
            float C_ij;
            float F_ij;

            cout << "Enter the travel cost :"<< endl;
            cin >> C_ij;
            cout<< "\n";
            F_ij = calculateF_ij( C_ij);

            cout << "--------------------------------------------"<<"\n"<<"The retrieved Fij is " << F_ij << endl<<"--------------------------------------------"<<"\n";        //result = piFunction();
            cout<<"\n"<<"\n";
        }
        else if(operation == "Tij"){
            float T_ij;
            float F_ij;
            float O_i;
            float D_j;
            float sum;
            cout << "Enter the Fij value :"<< endl;
            cin >> F_ij;
            cout<< "\n";
            cout << "Enter the Origin value :"<< endl;
            cin >> O_i;
            cout<< "\n";
            cout << "Enter the Destination value :"<< endl;
            cin >> D_j;
            cout<< "\n";
            cout << "Enter the total sum of Destination and Fij values :"<< endl;
            cin >> sum;
            cout<< "\n";

            T_ij = calculateT_ij(F_ij, O_i, D_j, sum);

            cout << "--------------------------------------------"<<"\n"<<"The retrieved Tij is " << T_ij << endl<<"--------------------------------------------"<<"\n";       //result = piFunction();
            cout<<"\n"<<"\n";
        }
        else if (operation == "q"){
            exit(0);
        }else{
            cout<<"Sorry, operation you entered is unknown. Try again."<<"\n"<<"\n";
        }
    }
    return 0;
}
