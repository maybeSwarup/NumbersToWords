#include<iostream>
#include<string>
using namespace std;

bool CheckInt(string str)
{
	bool flag=true;
	for(int i=0;i<str.length();i++)
	{
		if(!(str[i]>47&&str[i]<58)||(str.size()>1&&str[0]==48))
		{
			flag=false;
		}
	}
	if(flag) return true;
	else return false;
}


bool Odd(string str)
{
	if(str.size()%2==0) return false;
	else return true;
}


void Suffix(string str,int i)
{
	int size=str.size();
	switch(size)
	{
		case 3:
		{
			if(i==0)
			{
				cout<<"Hundred ";
				if(str[i+1]!=48 || str[i+2]!=48)
				{
					cout<<"And ";
				}
			}	
			break;
		}
		case 4:
		{
			switch(i)
			{
				case 0:
				{
					cout<<"Thousand ";
					if((str[i+1]==48&&(str[i+2]!=48||str[i+3]!=48))||(str[i+2]==48&&str[i+3]==48&&str[i+1]!=48))
					{
						cout<<"And ";
					}
					break;
				}
				case 1:
				{
					cout<<"Hundred ";
					if(str[i+1]!=48 || str[i+2]!=48)
					{
						cout<<"And ";
					}
					break;
				}
			}
			break;
		}
		case 5:
		{
			switch(i)
			{
				case 1:
				{
					cout<<"Thousand ";
					if((str[i+1]==48&&(str[i+2]!=48||str[i+3]!=48))||(str[i+2]==48&&str[i+3]==48&&str[i+1]!=48))
					{
						cout<<"And ";
					}
					break;
				}
				case 2:
				{
					cout<<"Hundred ";
					if(str[i+1]!=48 || str[i+2]!=48)
					{
						cout<<"And ";
					}
					break;
				}
			}
			break;
		}
		case 6:
		{
			switch(i)
			{
				case 0:
				{
					cout<<"Lakh ";
					if((str[i+1]==48&&str[i+2]==48&&str[i+3]==48&&(str[i+4]!=48||str[i+5]!=48))||(str[i+1]==48&&str[i+2]==48&&str[i+3]!=48&&str[i+4]==48&&str[i+5]==48)||(str[i+3]==48&&str[i+4]==48&&str[i+5]==48&&(str[i+1]!=48||str[i+2]!=48)))
					{
						cout<<"And ";
					}
					break;
				}
				case 2:
				{
					cout<<"Thousand ";
					if((str[i+1]==48&&(str[i+2]!=48||str[i+3]!=48))||(str[i+2]==48&&str[i+3]==48&&str[i+1]!=48))
					{
						cout<<"And ";
					}
					break;
				}
				case 3:
				{
					cout<<"Hundred ";
					if(str[i+1]!=48 || str[i+2]!=48)
					{
						cout<<"And ";
					}
					break;
				}
			}
			break;
		}
		case 7:
		{
			switch(i)
			{
				case 1:
				{
					cout<<"Lakh ";
					if((str[i+1]==48&&str[i+2]==48&&str[i+3]==48&&(str[i+4]!=48||str[i+5]!=48))||(str[i+1]==48&&str[i+2]==48&&str[i+3]!=48&&str[i+4]==48&&str[i+5]==48)||(str[i+3]==48&&str[i+4]==48&&str[i+5]==48&&(str[i+1]!=48||str[i+2]!=48)))
					{
						cout<<"And ";
					}
					break;
				}
				case 3:
				{
					cout<<"Thousand ";
					if((str[i+1]==48&&(str[i+2]!=48||str[i+3]!=48))||(str[i+2]==48&&str[i+3]==48&&str[i+1]!=48))
					{
						cout<<"And ";
					}
					break;
				}
				case 4:
				{
					cout<<"Hundred ";
					if(str[i+1]!=48 || str[i+2]!=48)
					{
						cout<<"And ";
					}
					break;
				}
			}
			break;
		}
		case 8:
		{
			switch(i)
			{
				case 0:
				{
					cout<<"Crore ";
					if((str[i+1]==48&&str[i+2]==48&&str[i+3]==48&&str[i+4]==48&&str[i+5]==48&&(str[i+6]!=48||str[i+7]!=48))||(str[i+1]==48&&str[i+2]==48&&str[i+3]==48&&str[i+4]==48&&str[i+5]!=48&&str[i+6]==48&&str[i+7]==48)||(str[i+1]==48&&str[i+2]==48&&(str[i+3]!=48||str[i+4]!=48)&&str[i+5]==48&&str[i+6]==48&&str[i+7]==48)||((str[i+1]!=48||str[i+2]!=48)&&str[i+3]==48&&str[i+4]==48&&str[i+5]==48&&str[i+6]==48&&str[i+7]==48))
					{
						cout<<"And ";
					}
					break;
				}
				case 2:
				{
					cout<<"Lakh ";
					if((str[i+1]==48&&str[i+2]==48&&str[i+3]==48&&(str[i+4]!=48||str[i+5]!=48))||(str[i+1]==48&&str[i+2]==48&&str[i+3]!=48&&str[i+4]==48&&str[i+5]==48)||(str[i+3]==48&&str[i+4]==48&&str[i+5]==48&&(str[i+1]!=48||str[i+2]!=48)))
					{
						cout<<"And ";
					}
					break;
				}
				case 4:
				{
					cout<<"Thousand ";
					if((str[i+1]==48&&(str[i+2]!=48||str[i+3]!=48))||(str[i+2]==48&&str[i+3]==48&&str[i+1]!=48))
					{
						cout<<"And ";
					}
					break;
				}
				case 5:
				{
					cout<<"Hundred ";
					if(str[i+1]!=48 || str[i+2]!=48)
					{
						cout<<"And ";
					}
					break;
				}
			}
			break;
		}
		case 9:
		{
			switch(i)
			{
				case 1:
				{
					cout<<"Crore ";
					if((str[i+1]==48&&str[i+2]==48&&str[i+3]==48&&str[i+4]==48&&str[i+5]==48&&(str[i+6]!=48||str[i+7]!=48))||(str[i+1]==48&&str[i+2]==48&&str[i+3]==48&&str[i+4]==48&&str[i+5]!=48&&str[i+6]==48&&str[i+7]==48)||(str[i+1]==48&&str[i+2]==48&&(str[i+3]!=48||str[i+4]!=48)&&str[i+5]==48&&str[i+6]==48&&str[i+7]==48)||((str[i+1]!=48||str[i+2]!=48)&&str[i+3]==48&&str[i+4]==48&&str[i+5]==48&&str[i+6]==48&&str[i+7]==48))
					{
						cout<<"And ";
					}
					break;
				}
				case 3:
				{
					cout<<"Lakh ";
					if((str[i+1]==48&&str[i+2]==48&&str[i+3]==48&&(str[i+4]!=48||str[i+5]!=48))||(str[i+1]==48&&str[i+2]==48&&str[i+3]!=48&&str[i+4]==48&&str[i+5]==48)||(str[i+3]==48&&str[i+4]==48&&str[i+5]==48&&(str[i+1]!=48||str[i+2]!=48)))
					{
						cout<<"And ";
					}
					break;
				}
				case 5:
				{
					cout<<"Thousand ";
					if((str[i+1]==48&&(str[i+2]!=48||str[i+3]!=48))||(str[i+2]==48&&str[i+3]==48&&str[i+1]!=48))
					{
						cout<<"And ";
					}
					break;
				}
				case 6:
				{
					cout<<"Hundred ";
					if(str[i+1]!=48 || str[i+2]!=48)
					{
						cout<<"And ";
					}
					break;
				}
			}
			break;
		}
	}
}
	
bool Even(string s)
{
	int i=stoi(s);
	if(i%2==0) return true;
	else return false;
}

int main()
{
	string str,str1;
	int c;
	cout<<"Enter Any Numbers And You Will Get It Spelled Out!\nMax Limit Is 9 Numbers.\t\t\t Use \"CTRL+C\" To Exit.\n\n";
	while(1)
	{
		cout<<"Enter number: ";
		cin>>str;
		if(CheckInt(str))
		{
			for(int i=0;i<str.length();i++)
			{
				switch(str[i])
				{
					case 48: 
					{
						if(str.size()==1) cout<<"Zero ";
						break;
					}
					case 49:
					{
						if((str.size()==1)||(str.size()==2&&i==1)||(str.size()==3&&(i==0||i==2))||(str.size()==4&&(i==0||i==1||i==3))||(str.size()==5&&(i==1||i==2||i==4))||(str.size()==6&&(i==0||i==2||i==3||i==5))||(str.size()==7&&(i==1||i==3||i==4||i==6))||(str.size()==8&&(i==0||i==2||i==4||i==5||i==7))||(str.size()==9&&(i==1||i==3||i==5||i==6||i==8))||(str.size()==10&&(i==0||i==2||i==4||i==6||i==7||i==9)))
						{
							cout<<"One ";
							Suffix(str,i);
						}
						else if(str.size()>1)
						{
							if(str.size()<3||(str.size()>3&&Odd(str))||str.size()>1)
							{
								if(str[i+1]==48)
								{
									cout<<"Ten ";
									i++;
									Suffix(str,i);
								}
								else if(str[i+1]==49)
								{
									cout<<"Eleven ";
									i++;
									Suffix(str,i);
								}
								else if(str[i+1]==50)
								{
									cout<<"Twelve ";
									i++;
									Suffix(str,i);
								}
								else if(str[i+1]==51)
								{
									cout<<"Thirteen ";
									i++;
									Suffix(str,i);
								}
								else if(str[i+1]==52)
								{
									cout<<"Fourteen ";
									i++;
									Suffix(str,i);
								}
								else if(str[i+1]==53)
								{
									cout<<"Fifteen ";
									i++;
									Suffix(str,i);
								}
								else if(str[i+1]==54)
								{
									cout<<"Sixteen ";
									i++;
									Suffix(str,i);
								}
								else if(str[i+1]==55)
								{
									cout<<"Seventeen ";
									i++;
									Suffix(str,i);
								}
								else if(str[i+1]==56)
								{
									cout<<"Eighteen ";
									i++;
									Suffix(str,i);
								}
								else if(str[i+1]==57)
								{
									cout<<"Nineteen ";
									i++;
									Suffix(str,i);
								}
							}
						}
						else cout<<"One ";
						break;
					} 
					case 50: 
					{
						if((str.size()==1)||(str.size()==2&&i==1)||(str.size()==3&&(i==0||i==2))||(str.size()==4&&(i==0||i==1||i==3))||(str.size()==5&&(i==1||i==2||i==4))||(str.size()==6&&(i==0||i==2||i==3||i==5))||(str.size()==7&&(i==1||i==3||i==4||i==6))||(str.size()==8&&(i==0||i==2||i==4||i==5||i==7))||(str.size()==9&&(i==1||i==3||i==5||i==6||i==8))||(str.size()==10&&(i==0||i==2||i==4||i==6||i==7||i==9)))
						{
							cout<<"Two ";
							Suffix(str,i);
						}
						else if(str.size()>1)
						{
							if(str.size()<3||(str.size()>3&&Odd(str))||str.size()>1)
							{
								cout<<"Twenty ";
								if(str[i+1]==48) i++;
								Suffix(str,i);
							}
						}
						else cout<<"Two ";
						break;
					}
					case 51: 
					{
						if((str.size()==1)||(str.size()==2&&i==1)||(str.size()==3&&(i==0||i==2))||(str.size()==4&&(i==0||i==1||i==3))||(str.size()==5&&(i==1||i==2||i==4))||(str.size()==6&&(i==0||i==2||i==3||i==5))||(str.size()==7&&(i==1||i==3||i==4||i==6))||(str.size()==8&&(i==0||i==2||i==4||i==5||i==7))||(str.size()==9&&(i==1||i==3||i==5||i==6||i==8))||(str.size()==10&&(i==0||i==2||i==4||i==6||i==7||i==9)))
						{
							cout<<"Three ";
							Suffix(str,i);
						}
						else if(str.size()>1)
						{
							if(str.size()<3||(str.size()>3&&Odd(str))||str.size()>1)
							{
								cout<<"Thirty ";
								if(str[i+1]==48) i++;
								Suffix(str,i);
							}
						}
						else cout<<"Three ";
						break;
					}
					case 52: 
					{
						if((str.size()==1)||(str.size()==2&&i==1)||(str.size()==3&&(i==0||i==2))||(str.size()==4&&(i==0||i==1||i==3))||(str.size()==5&&(i==1||i==2||i==4))||(str.size()==6&&(i==0||i==2||i==3||i==5))||(str.size()==7&&(i==1||i==3||i==4||i==6))||(str.size()==8&&(i==0||i==2||i==4||i==5||i==7))||(str.size()==9&&(i==1||i==3||i==5||i==6||i==8))||(str.size()==10&&(i==0||i==2||i==4||i==6||i==7||i==9)))
						{
							cout<<"Four ";
							Suffix(str,i);
						}
						else if(str.size()>1)
						{
							if(str.size()<3||(str.size()>3&&Odd(str))||str.size()>1)
							{
								cout<<"Fourty ";
								if(str[i+1]==48) i++;
								Suffix(str,i);
							}
						}
						else cout<<"Four ";
						break;
					}
					case 53: 
					{
						if((str.size()==1)||(str.size()==2&&i==1)||(str.size()==3&&(i==0||i==2))||(str.size()==4&&(i==0||i==1||i==3))||(str.size()==5&&(i==1||i==2||i==4))||(str.size()==6&&(i==0||i==2||i==3||i==5))||(str.size()==7&&(i==1||i==3||i==4||i==6))||(str.size()==8&&(i==0||i==2||i==4||i==5||i==7))||(str.size()==9&&(i==1||i==3||i==5||i==6||i==8))||(str.size()==10&&(i==0||i==2||i==4||i==6||i==7||i==9)))
						{
							cout<<"Five ";
							Suffix(str,i);
						}
						else if(str.size()>1)
						{
							if(str.size()<3||(str.size()>3&&Odd(str))||str.size()>1)
							{
								cout<<"Fifty ";
								if(str[i+1]==48) i++;
								Suffix(str,i);
							}
						}
						else cout<<"Five ";
						break;
					}
					case 54: 
					{
						if((str.size()==1)||(str.size()==2&&i==1)||(str.size()==3&&(i==0||i==2))||(str.size()==4&&(i==0||i==1||i==3))||(str.size()==5&&(i==1||i==2||i==4))||(str.size()==6&&(i==0||i==2||i==3||i==5))||(str.size()==7&&(i==1||i==3||i==4||i==6))||(str.size()==8&&(i==0||i==2||i==4||i==5||i==7))||(str.size()==9&&(i==1||i==3||i==5||i==6||i==8))||(str.size()==10&&(i==0||i==2||i==4||i==6||i==7||i==9)))
						{
							cout<<"Six ";
							Suffix(str,i);
						}
						else if(str.size()>1)
						{
							if(str.size()<3||(str.size()>3&&Odd(str))||str.size()>1)
							{
								cout<<"Sixty ";
								if(str[i+1]==48) i++;
								Suffix(str,i);
							}
						}
						else cout<<"Six ";
						break;
					}
					case 55: 
					{
						if((str.size()==1)||(str.size()==2&&i==1)||(str.size()==3&&(i==0||i==2))||(str.size()==4&&(i==0||i==1||i==3))||(str.size()==5&&(i==1||i==2||i==4))||(str.size()==6&&(i==0||i==2||i==3||i==5))||(str.size()==7&&(i==1||i==3||i==4||i==6))||(str.size()==8&&(i==0||i==2||i==4||i==5||i==7))||(str.size()==9&&(i==1||i==3||i==5||i==6||i==8))||(str.size()==10&&(i==0||i==2||i==4||i==6||i==7||i==9)))
						{
							cout<<"Seven ";
							Suffix(str,i);
						}
						else if(str.size()>1)
						{
							if(str.size()<3||(str.size()>3&&Odd(str))||str.size()>1)
							{
								cout<<"Seventy ";
								if(str[i+1]==48) i++;
								Suffix(str,i);
							}
						}
						else cout<<"Seven ";
						break;
					}
					case 56: 
					{
						if((str.size()==1)||(str.size()==2&&i==1)||(str.size()==3&&(i==0||i==2))||(str.size()==4&&(i==0||i==1||i==3))||(str.size()==5&&(i==1||i==2||i==4))||(str.size()==6&&(i==0||i==2||i==3||i==5))||(str.size()==7&&(i==1||i==3||i==4||i==6))||(str.size()==8&&(i==0||i==2||i==4||i==5||i==7))||(str.size()==9&&(i==1||i==3||i==5||i==6||i==8))||(str.size()==10&&(i==0||i==2||i==4||i==6||i==7||i==9)))
						{
							cout<<"Eight ";
							Suffix(str,i);
						}
						else if(str.size()>1)
						{
							if(str.size()<3||(str.size()>3&&Odd(str))||str.size()>1)
							{
								cout<<"Eighty ";
								if(str[i+1]==48) i++;
								Suffix(str,i);
							}
						}
						else cout<<"Eight ";
						break;
					}
					case 57: 
					{
						if((str.size()==1)||(str.size()==2&&i==1)||(str.size()==3&&(i==0||i==2))||(str.size()==4&&(i==0||i==1||i==3))||(str.size()==5&&(i==1||i==2||i==4))||(str.size()==6&&(i==0||i==2||i==3||i==5))||(str.size()==7&&(i==1||i==3||i==4||i==6))||(str.size()==8&&(i==0||i==2||i==4||i==5||i==7))||(str.size()==9&&(i==1||i==3||i==5||i==6||i==8))||(str.size()==10&&(i==0||i==2||i==4||i==6||i==7||i==9)))
						{
							cout<<"Nine ";
							Suffix(str,i);
						}
						else if(str.size()>1)
						{
							if(str.size()<3||(str.size()>3&&Odd(str))||str.size()>1)
							{
								cout<<"Ninety ";
								if(str[i+1]==48) i++;
								Suffix(str,i);
							}
						}
						else cout<<"Nine ";
						break;
					}
				}
			}
			cout<<"\n\n";
		}
		else cout<<"This Input Is Not Allowed. Please Try Again.\n\n";
	}
	return 0;
}
