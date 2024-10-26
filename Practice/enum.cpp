// #include <iostream>
// using namespace std;
// enum shape{
//     cir,
//     ell,
//     rec,
//     cone
// };
// int main(){
//     shape circle = (shape)3;
//     cout<<"Enter shape code"<<endl;
//     int code;
//     cin>>code;
//     while(code>=circle && code<=cone){
//         switch(code){
//             case 'cir':
//             cout<<"You chose a circle"<<endl;
//             break;
//             case 'rec':
//             cout<<"You chose a rectangle"<<endl;
//             break;
//             case 'cone':
//             cout<<"You chose a cone"<<endl;
//             break;
//             case 'ell':
//             cout<<"You chose a ellipse"<<endl;
//             break;
//         }
//         cout<<"Enter shape code"<<endl;
//         cin>>code;
//     }
//     cout<<"BYE"<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

enum shape {
    cir = 0, // Assigning explicit values for clarity
    ell,
    rec,
    cone
};

int main() {
    cout << "Enter shape code (0: circle, 1: ellipse, 2: rectangle, 3: cone)" << endl;
    int code;
    cin >> code;

    while (code >= cir && code <= cone) {
        switch (code) {
            case cir:
                cout << "You chose a circle" << endl;
                break;
            case ell:
                cout << "You chose an ellipse" << endl;
                break;
            case rec:
                cout << "You chose a rectangle" << endl;
                break;
            case cone:
                cout << "You chose a cone" << endl;
                break;
            default:
                cout << "Invalid shape code" << endl;
                break;
        }
        cout << "Enter shape code (0: circle, 1: ellipse, 2: rectangle, 3: cone)" << endl;
        cin >> code;
    }

    cout << "BYE" << endl;
    return 0;
}