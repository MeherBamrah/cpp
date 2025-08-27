// take a day number and print the corresponding days for 1 print Monday. For 2 print Tuesday and so on for 7 print Sunday
intmain(){
  int day;
  cin >> day;

  switch(day){
      case 1:
            cout << "Monday";
      case 2:
            cout << "Tuesday";
      case 3:
            cout << "Wednesday";
      case 4:
            cout << "Thursday";
      case 5:
            cout << "Friday";
      case 6:
            cout << "Saturday";
      case 7:
            cout << "Sunday";
      default:
            cout<<"Invalid";
      }
cout<<"check:";
return 0;
}
