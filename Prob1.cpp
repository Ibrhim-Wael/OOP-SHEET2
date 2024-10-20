#include <isostream>

class CounterType {
    private:
    int counter;
    public:
    CounterType() {
        counter=0;
    }
    void Counterincrease() {
        counter++;
    }
    void Counterdecrease() {
        if (counter==0) {
            cout<<"You cant use negative number"<<endl;
        }else {
            counter--;
        }
    }
    void Counterset(int number) {
        if(number>=0) {
            counter=number;
        }else {
            cout<<"You cant use negative number"<<endl;
        }
    }
    int Counterreturn() {
        return counter;
    }

};
int main() {
CounterType counter;
    cout<<counter.Counterreturn()<<endl;//0
    counter.Counterincrease();
    cout<<counter.Counterreturn()<<endl;//1
    counter.Counterdecrease();
    cout<<counter.Counterreturn()<<endl;//0
    counter.Counterset(10);
    counter.Counterdecrease();
    cout<<counter.Counterreturn()<<endl;//9
    counter.Counterset(0);
    counter.Counterdecrease();//You cant use negative number
    cout<<counter.Counterreturn()<<endl;//0
    return 0;
}
