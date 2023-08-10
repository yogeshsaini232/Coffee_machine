#include<bits/stdc++.h>
using namespace std;
int machineBeans = 10;
int machineMilk =  10;
int machineWater = 10;

class coffeeMachine{
    public:
    
    void updateIngredients(int b, int m, int w){
        machineBeans-=b;
        machineMilk-=m;
        machineWater-=w;
    }

    void addIngredients(int b, int m, int w){
        machineBeans+=b;
        machineMilk+=m;
        machineWater+=w;
    }
};

class ingredients{
    public:

    int milk;
    int coffee;
    int water;

    void alertMessage(int c, int m, int w){
        int addc = c-machineBeans;
        int addm = m-machineMilk;
        int addw = w-machineWater;

        if(c>machineBeans) cout<<"Please add "<<addc<<"or more units of coffee"<<endl;

        if(m>machineMilk) cout<<"Please add "<<addm<<"or more units of milk"<<endl;

        if(w>machineWater) cout<<"Please add "<<addw<<"or more units of water"<<endl;
    }


};

class Cappuccino: public ingredients, public coffeeMachine{
    public:

    Cappuccino(){
        milk = 2, coffee = 2, water = 1;
    }

};

class Latte: public ingredients, public coffeeMachine{
    public:
    Latte(){
        milk = 3, coffee = 2, water = 1;
    }

};

class Espresso: public ingredients, public coffeeMachine{
    public:
    Espresso(){
        milk = 0, coffee = 3, water = 1;
    }

};

class Milk: public ingredients, public coffeeMachine{
    public:
    Milk(){
        milk = 3, coffee = 0, water = 0;
    }

};

class Water: public ingredients, public coffeeMachine{
    public:
    Water(){
        milk = 0, coffee = 0, water = 3;
    }

};



int main(){
    cout<<"Menu : "<<endl;
    cout<<"Please select an option :"<<endl;
    cout<<"1. Cappuccino"<<endl;
    cout<<"2. Latte"<<endl;
    cout<<"3. Espresso"<<endl;
    cout<<"4. Milk"<<endl;
    cout<<"5. Water"<<endl;

    while(true){
        int p;
        cin>>p;

        if(p==1){
            Cappuccino drink;
            if(machineBeans < drink.coffee || machineMilk < drink.milk || machineWater < drink.water){
                drink.alertMessage(drink.coffee, drink.milk, drink.water);
                int x, y, z;
                cout<<"Please add coffee, milk and water in order "<<endl;
                cin>>x>>y>>z;
                drink.addIngredients(x, y, z);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
            }
            else{
                drink.updateIngredients(drink.coffee, drink.milk, drink.water);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
                cout<<"cappucino has been served successfully"<<endl;
            }
        }
        if(p==2){
            Latte drink;
            if(machineBeans < drink.coffee || machineMilk < drink.milk || machineWater < drink.water){
                drink.alertMessage(drink.coffee, drink.milk, drink.water);
                int x, y, z;
                cout<<"Please add coffee, milk and water in order "<<endl;
                cin>>x>>y>>z;
                drink.addIngredients(x, y, z);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
                
            }
            else{
                drink.updateIngredients(drink.coffee, drink.milk, drink.water);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
                cout<<"Latte has been served successfully"<<endl;
            }
        }
        if(p==3){
            Espresso drink;
            if(machineBeans < drink.coffee || machineMilk < drink.milk || machineWater < drink.water){
                drink.alertMessage(drink.coffee, drink.milk, drink.water);
                int x, y, z;
                cout<<"Please add coffee, milk and water in order "<<endl;
                cin>>x>>y>>z;
                drink.addIngredients(x, y, z);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
            }
            else{
                drink.updateIngredients(drink.coffee, drink.milk, drink.water);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
                cout<<"espresso has been served successfully"<<endl;
            }
        }
        if(p==4){
            Milk drink;
            if(machineBeans < drink.coffee || machineMilk < drink.milk || machineWater < drink.water){
                drink.alertMessage(drink.coffee, drink.milk, drink.water);
                int x, y, z;
                cout<<"Please add coffee, milk and water in order "<<endl;
                cin>>x>>y>>z;
                drink.addIngredients(x, y, z);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
            }
            else{
                drink.updateIngredients(drink.coffee, drink.milk, drink.water);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
                cout<<"Milk has been served successfully"<<endl;
            }
        }
        if(p==5){
            Water drink;
            if(machineBeans < drink.coffee || machineMilk < drink.milk || machineWater < drink.water){
                drink.alertMessage(drink.coffee, drink.milk, drink.water);
                int x, y, z;
                cout<<"Please add coffee, milk and water in order "<<endl;
                cin>>x>>y>>z;
                drink.addIngredients(x, y, z);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
            }
            else{
                drink.updateIngredients(drink.coffee, drink.milk, drink.water);
                cout<<"updated ingredients : "<<endl<<"coffee Beans:"<<machineBeans<<"\t\tmilk:"<<machineMilk<<"\t\twater: "<<machineWater<<endl;
                cout<<"water has been served successfully"<<endl;
            }
        }
        else{
            return 0;
        }
    }

    
}