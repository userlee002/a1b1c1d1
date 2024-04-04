#include<bits/stdc++.h>
using namespace std ;
    
int main(){
	int tci[6] ; 
	tci[1] = 4 ; tci[2] = 8 ; tci[3] = 7 ; tci[4] = 6 ; tci[5] = 3 ;
	string tcs[6] ;
	tcs[1] = "Medium Wac " ; tcs[2] = "WChicken Nugget " ;  tcs[3] = "Geez Burger " ; tcs[4] = "ButtMilk Crispy Chicken " ; tcs[5] = "Plastic Toy " ; 
	int ddi[5] ; 
	ddi[1] = 2 ; ddi[2] = 3 ; ddi[3] = 5 ; ddi[4] = 7 ;
	string dds[5] ;
	dds[1] = "German Fries " ; dds[2] = "Durian Slices " ; dds[3] = "WcFurry " ; dds[4] = "Chocolate Sunday " ;
	int money = 0 , x , y ;
	while( cin >> x ){
		if( x == 0 ){
			cout << "Total: " << money ;
			break ; 
		}
		if( x == 1 ){
			cin >> y ;
			cout << tcs[y] << tci[y] << endl ;
			money += tci[y] ;
		}
		if( x == 2 ){
			cin >> y ;
			cout << dds[y] << ddi[y] << endl ;
			money += ddi[y] ;
		}
	}
}
