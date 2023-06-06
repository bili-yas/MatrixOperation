#include<iostream>
using namespace std;

class Matrix{
    public:
    int a[100][100],b[100][100];
    int sum[100][100];
    int subtraction[100][100];
    int multiplication[100][100];


    int row, coloumn,i,j,k;
    int row2, coloumn2;


    void addition(){//For adding two matrices:
        for(i = 0; i < row2; i++){
            for (j = 0; j < coloumn2; j++){
                sum[i][j] = a[i][j]+b[i][j];
            }
        }

        cout << "Sum of two matrices is :"<<endl;
        for(i = 0; i < row2; i++){
            for (j = 0; j < coloumn2; j++){
                cout <<sum[i][j]<<"  ";
            }
            cout << endl;
        }
    }

    void subtract(){
        for(i = 0; i < row2; i++){
            for (j = 0; j < coloumn2; j++){
                subtraction[i][j] = a[i][j]-b[i][j];
            }
        }

        cout << "Subtraction of two matrices is :"<<endl;
        for(i = 0; i < row2; i++){
            for (j = 0; j < coloumn2; j++){
                cout <<subtraction[i][j]<<"  ";
            }
            cout << endl;
        }
    }

    void multiply(){
        int smultiply[100][100];

        cout << "Multiplication of two matrices is:"<<endl;
        for (i = 0; i < row; i++){
            for (j = 0; j < coloumn2; j++){
                smultiply[i][j] = 0;
                for (k = 0; k < row2; k++){
                    smultiply[i][j] += a[i][k] * b[k][j];
                }
                cout << smultiply[i][j]<<"   ";
            }
            cout <<endl;
        }
    }

    void transpose(){
        cout << "Transpose of a matrix is:"<<endl;
        for (i = 0; i < coloumn; i++){
            for(j = 0; j < row; j++){
                cout << a[j][i]<<" ";
            }
        cout << endl;
        }
    }


};

int main(){
    Matrix m1,m2,m3,m4;

    int choice;
do{
    cout <<"___________________________________"<<endl;
    cout <<"        Matrix Operations"<<endl;
    cout <<"___________________________________"<<endl;
    cout << endl;
    cout << "What do you want to perform:"<<endl<<"1.Matrix Addition."<<endl<< "2.Matrix Subtraction."<<endl
    <<"3.Matrix Multiplication."<<endl<< "4.Matrix Transpose."<<endl<<"5.Exit."<<endl;
    cin >> choice;

    switch(choice){
    case 1:
        cout << "Enter number of rows of first matrix:"<<endl;
        cin >> m1.row;
        cout << "Enter number of coloumns of first matrix:"<<endl;
        cin >> m1.coloumn;

        cout << endl;

        cout << "Enter number of rows of second matrix:"<<endl;
        cin >> m1.row2;
        cout << "Enter number of coloumns of second matrix:"<<endl;
        cin >> m1.coloumn2;

        cout << endl;

        if (m1.row != m1.row2){
            cout << "The matrix addition is not possible for different order of matrices!!."<<endl;
        }
        else{
            cout <<"Enter elements of 1st matrix:"<<endl;
            for (m1.i = 0; m1.i < m1.row; m1.i++){
                for (m1.j = 0; m1.j < m1.coloumn; m1.j++){
                    cout << "Enter a"<<m1.i+1 << m1.j+1<<" element:"<<endl;
                    cin >>m1.a[m1.i][m1.j];
            }
            cout << endl;
        }

            cout << "Enter elements of 2nd matrix:"<<endl;
            for(m1.i = 0; m1.i < m1.row2; m1.i++){
                for (m1.j = 0; m1.j < m1.coloumn2; m1.j++){
                    cout << "Enter b"<<m1.i+1<<m1.j+1<<" element:"<<endl;
                    cin >> m1.b[m1.i][m1.j];
                }
            }

            cout << endl;

            m1.addition();

            cout << endl;

        }
        break;

    case 2:
            cout << "Enter number of rows of first matix:"<<endl;
            cin >> m2.row;
            cout << "Enter number of coloumns of first matix:"<<endl;
            cin >> m2.coloumn;

            cout << endl;

            cout << "Enter number of rows of second matix:"<<endl;
            cin >> m2.row2;
            cout << "Enter number of coloumns of second matix:"<<endl;
            cin >> m2.coloumn2;

            cout << endl;

            if (m2.row != m2.row2){
                cout << "The matrix subtraction is not possible for different order of matrices!!."<<endl;
            }

            else{
                cout <<"Enter elements of 1st matrix:"<<endl;
                for (m2.i = 0; m2.i < m2.row; m2.i++){
                    for (m2.j = 0; m2.j < m2.coloumn; m2.j++){
                        cout << "Enter a"<<m2.i+1 << m2.j+1<<" element:"<<endl;
                        cin >>m2.a[m2.i][m2.j];
                }
                cout << endl;
            }

                cout << "Enter elements of 2nd matrix:"<<endl;
                for(m2.i = 0; m2.i < m2.row2; m2.i++){
                    for (m2.j = 0; m2.j < m2.coloumn2; m2.j++){
                        cout << "Enter b"<<m2.i+1<<m2.j+1<<" element:"<<endl;
                        cin >> m2.b[m2.i][m2.j];
                    }
                }

                cout << endl;

                m2.subtract();

                cout << endl;
            }

            break;

        case 3:
            cout << "Enter number of rows of first matrix:"<<endl;
            cin >> m3.row;
            cout << "Enter number of coloums of first matrix:"<<endl;
            cin >> m3.coloumn;

            cout << endl;

            cout << "Enter number of rows of second matrix:"<<endl;
            cin >> m3.row2;
            cout << "Enter number of coloums of second matrix:"<<endl;
            cin >> m3.coloumn2;

            cout << endl;

            if (m3.coloumn != m3.row2){
                cout << "The matrix multiplication is not possible for this order of matrices!!."<<endl;
                cout <<"The number of coloums of first matrix should be equal to the number of row of second matrix."<<endl;
            }
            else{
                cout <<"Enter elements of 1st matrix:"<<endl;
                for (m3.i = 0; m3.i < m3.row; m3.i++){
                    for (m3.j = 0; m3.j < m3.coloumn; m3.j++){
                        cout << "Enter a"<<m3.i+1 << m3.j+1<<" element:"<<endl;
                        cin >>m3.a[m3.i][m3.j];
                }
                cout << endl;
                }

                cout << "Enter elements of 2nd matrix:"<<endl;
                for(m3.i = 0; m3.i < m3.row2; m3.i++){
                    for (m3.j = 0; m3.j < m3.coloumn2; m3.j++){
                        cout << "Enter b"<<m3.i+1<<m3.j+1<<" element:"<<endl;
                        cin >> m3.b[m3.i][m3.j];
                    }
                }

                cout << endl;

                m3.multiply();

                cout << endl;
            }
            break;
        case 4:
            cout << "Enter row of a matrix:";
            cin >> m4.row;
            cout << "Enter column of a matrix: ";
            cin >> m4.coloumn;

            cout << "Enter elements of a matrix:"<<endl;
            for (m4.i = 0; m4.i < m4.row; m4.i++){
                for (m4.j = 0; m4.j < m4.coloumn; m4.j++){
                    cout << "Enter a"<<m4.i+1<<m4.j+1<<" element:"<<endl;
                    cin >> m4.a[m4.i][m4.j];
                }
            }
            cout << endl;

            m4.transpose();

            cout << endl;

            break;

        case 5:
            cout << endl;
            cout << "Hope you liked it!!!!!\nThank you!!!!"<<endl;
            break;

        default:
            cout << "Invalid Input!!!\nPlease choose number from 1-5 from given below:"<<endl;

    }

}while(choice != 5);

    return 0;
}
