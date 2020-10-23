#include <iostream>
#include <sstream> 

using namespace std; 

int main(){ 

string data[367] ={"United Arab Emirates Dirham", "0.97937", "SAR/AED", "Australian Dollar", "0.37315", "SAR/AUD", "Bahraini Dinar", "0.10053", "SAR/BHD", "Israeli New Sheqel", "0.90015", "SAR/ILS", "Jordanian Dinar", "0.18924", "SAR/JOD", "Kuwaiti Dinar", "0.08146", "SAR/KWD", "Kazakhstan Tenge", "114.60953", "SAR/KZT", "Lebanese Pound", "404.23319", "SAR/LBP", "New Zealand Dollar", "0.3982", "SAR/NZD", "Omani Rial", "0.10266", "SAR/OMR", "Qatari Rial", "0.97084", "SAR/QAR", "Tunisian Dinar", "0.73146", "SAR/TND", "Uzbekistan Som", "2772.77381", "SAR/UZS", "Yemeni Rial", "66.76692", "SAR/YER", "Bulgarian Lev", "0.44078", "SAR/BGN", "Swiss Franc", "0.2412", "SAR/CHF", "Czech Republic Koruna", "6.11467", "SAR/CZK", "Danish Krone", "1.67515", "SAR/DKK", "Estonian Kroon", "3.52271", "SAR/EEK", "Euro", "0.22514", "SAR/EUR", "British Pound Sterling", "0.20397", "SAR/GBP", "Croatian Kuna", "1.70637", "SAR/HRK", "Hungarian Forint", "81.91454", "SAR/HUF", "Icelandic Krona", "37.1271", "SAR/ISK", "Lithuanian Lita", "0.78732", "SAR/LTL", "Latvian Lat", "0.16129", "SAR/LVL", "Moldovan Leu", "4.55831", "SAR/MDL", "Macedonian Denar", "13.9232", "SAR/MKD", "Norwegian Krone", "2.45958", "SAR/NOK", "Polish Zloty", "1.03061", "SAR/PLN", "Romanian Leu", "1.09784", "SAR/RON", "Serbian Dinar", "26.47525", "SAR/RSD", "Russian Ruble", "20.35165", "SAR/RUB", "Swedish Krona", "2.33484", "SAR/SEK", "Slovak Koruna", "5.92103", "SAR/SKK", "Turkish Lira", "2.12327", "SAR/TRY", "Ukrainian Hryvnia", "7.55781", "SAR/UAH", "Netherlands Antillean Guilder", "0.47988", "SAR/ANG", "Argentine Peso", "20.79526", "SAR/ARS", "Bolivian Boliviano", "1.84864", "SAR/BOB", "Brazilian Real", "1.49132", "SAR/BRL", "Canadian Dollar", "0.34976", "SAR/CAD", "Chilean Peso", "207.6606", "SAR/CLP", "Colombian Peso", "1008.96981", "SAR/COP", "Costa Rican Colon", "161.26372", "SAR/CRC", "Dominican Peso", "15.61903", "SAR/DOP", "Honduran Lempira", "6.57462", "SAR/HNL", "Cayman Islands Dollar", "0.22279", "SAR/KYD", "Mexican Peso", "5.58186", "SAR/MXN", "Nicaraguan Cordoba Oro", "9.31716", "SAR/NIO", "Peruvian Nuevo Sol", "0.96191", "SAR/PEN", "Paraguayan Guarani", "1879.47824", "SAR/PYG", "Salvadoran Colon", "2.33933", "SAR/SVC", "Trinidad and Tobago Dollar", "1.81345", "SAR/TTD", "US Dollar", "0.26664", "SAR/USD", "Uruguayan Peso", "11.42464", "SAR/UYU", "Venezuelan Bolivar Fuerte", "2.66308", "SAR/VEF","Bulgarian Lev", "0.44088", "SAR/BGN", "Swiss Franc", "0.24116", "SAR/CHF", "Czech Republic Koruna", "6.1173", "SAR/CZK", "Danish Krone", "1.67492" , "SAR/DKK", "Estonian Kroon", "3.52224", "SAR/EEK", "Euro", "0.22511", "SAR/EUR", "British Pound Sterling", "0.20397", "SAR/GBP", "Croatian Kuna", "1.70569", "SAR/HRK", "Hungarian Forint", "81.90273", "SAR/HUF", "Icelandic Krona", "37.12295", "SAR/ISK", "Lithuanian Lita", "0.78729", "SAR/LTL", "Latvian Lat", "0.16128", "SAR/LVL", "Moldovan Leu", "4.55813", "SAR/MDL", "Macedonian Denar", "13.92264", "SAR/MKD", "Norwegian Krone", "2.46049", "SAR/NOK", "Polish Zloty", "1.03178", "SAR/PLN", "Romanian Leu", "1.09731", "SAR/RON", "Serbian Dinar", "26.47101", "SAR/RSD", "Russian Ruble", "20.35744", "SAR/RUB", "Swedish Krona", "2.33514", "SAR/SEK", "Slovak Koruna", "5.92079", "SAR/SKK", "Turkish Lira", "2.12295", "SAR/TRY", "Ukrainian Hryvnia", "7.55751", "SAR/UAH",  "Bangladeshi Taka", "22.66812", "SAR/BDT", "Brunei Dollar", "0.3628", "SAR/BND", "Chinese Yuan Renminbi", "1.77842", "SAR/CNY", "Fiji Dollar", "0.56527", "SAR/FJD", "Hong Kong Dollar", "2.06656", "SAR/HKD", "Indonesian Rupiah", "3914.4543", "SAR/IDR", "Indian Rupee", "19.63794", "SAR/INR", "Japanese Yen", "27.92287", "SAR/JPY", "South Korean Won", "300.82042", "SAR/KRW", "Sri Lanka Rupee", "49.29756", "SAR/LKR", "Maldivian Rufiyaa", "4.1088", "SAR/MVR", "Malaysian Ringgit", "1.10852", "SAR/MYR", "Nepalese Rupee", "31.51491", "SAR/NPR", "Philippine Peso", "12.90225", "SAR/PHP", "Pakistani Rupee", "43.25092", "SAR/PKR", "Singapore Dollar", "0.36179", "SAR/SGD", "Thai Baht", "8.33223", "SAR/THB", "New Taiwan Dollar", "7.6323", "SAR/TWD", "Vietnamese Dong", "6179.6929", "SAR/VND", "Iraqi Dinar", "317.4235", "SAR/IQD",  "Netherlands Antillean Guilder", "0.47987", "SAR/ANG", "Argentine Peso", "20.79461", "SAR/ARS", "Bolivian Boliviano", "1.84857", "SAR/BOB", "Brazilian Real", "1.49127", "SAR/BRL", "Canadian Dollar", "0.34989", "SAR/CAD", "Chilean Peso", "207.49285", "SAR/CLP", "Colombian Peso", "1008.92945", "SAR/COP", "Costa Rican Colon", "161.25727", "SAR/CRC", "Dominican Peso", "15.61841", "SAR/DOP", "Honduran Lempira", "6.57436", "SAR/HNL", "Cayman Islands Dollar", "0.22278", "SAR/KYD", "Mexican Peso", "5.57761", "SAR/MXN", "Nicaraguan Cordoba Oro", "9.31681", "SAR/NIO", "Peruvian Nuevo Sol", "0.96187", "SAR/PEN", "Paraguayan Guarani", "1879.40307", "SAR/PYG", "Salvadoran Colon", "2.33924", "SAR/SVC", "Trinidad and Tobago Dollar", "1.81337", "SAR/TTD", "US Dollar", "0.26663", "SAR/USD", "Uruguayan Peso", "11.42418", "SAR/UYU", "Venezuelan Bolivar Fuerte", "2.66297", "SAR/VEF"};
int c = 0;
int C = 1;
int E = 2;
int ui=0;
double uc=1;
//printing the Counteries

for(int i=0; i<120;i++){
	
	cout<<"["<<i<<"] "<<data[c]<<"\n";
	c=c+3	;
	
}

//printing the Currencies
//for(int i=0; i<120;i++){
//	
//	cout<<data[C]<<"\n";
//	C=C+3	;
//	
//}
////printing the Exchange
//for(int i=0; i<120;i++){
//	
//	cout<<data[E]<<"\n";
//	E=E+3	;
//	
//}
// ------  Taking an Input from the user ------ //
cout<<"\n\n\n[+] Choose the number of currency to change: ";
cin >> ui;
cout<<"\n[+] Amount of Currency in Saudi Riyal: ";
cin >> uc;

for(int i=0; i<120;i++){
	
	if (ui == i){
		cout << "[ "<<data[ui*3] << " ]"<< " The Exchange currency to SAR is: "<<data[ui*3+1]<<" "<<data[ui*3+2]<<endl;
		stringstream ss(data[ui*3+1]);
		double a=0;
		ss>>a;
		cout <<"Result = " <<  a *uc ;
	}
	
}

}
