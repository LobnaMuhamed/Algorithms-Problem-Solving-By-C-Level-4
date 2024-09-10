#include "Header.h"
using namespace MyLib;

int main()
{
	// Problem 1
	/*
	int Number = ReadPositiveNumber("Enter a positive Number?");
	cout << NumberToText(Number) << endl;
	*/

	// Problem 2
	/*
	int Year = ReadPositiveNumber("Please enter a year to check? ");
	cout << ((IsLeapYear(Year) ? "Leap Year" : "Not Leap Year")) << endl;
	*/

	// Problem 3
	/*
	int Year = ReadPositiveNumber("Please enter a year to check? ");
	cout << ((IsLeapYearOnLine(Year) ? "Leap Year" : "Not Leap Year")) << endl;
	*/

	// Problem 4
	/*
	short Year = ReadPositiveNumber("Please enter a year to check? ");
	cout << "Number Of Days    in Year [" << Year << "] is " << NumberOfDaysInAYear(Year) << endl;
	cout << "Number Of Hours   in Year [" << Year << "] is " << NumberOfHoursInAYear(Year) << endl;
	cout << "Number Of Minutes in Year [" << Year << "] is " << NumberOfMinutesInAYear(Year) << endl;
	cout << "Number Of Seconds in Year [" << Year << "] is " << NumberOfSecondsInAYear(Year) << endl;
	*/

	// Problem 5 && 6
	/*
		short Year = ReadPositiveNumber("Please enter a Year to check? ");
		short Month = ReadPositiveNumber("Please enter a Month to check? ");
		cout << "Number Of Days    in Month [" << Month << "] is " << NumberOfDaysInAMonth(Month, Year) << endl;
		cout << "Number Of Hours   in Month [" << Month << "] is " << NumberOfHoursInAMonth(Month, Year) << endl;
		cout << "Number Of Minutes in Month [" << Month << "] is " << NumberOfMinutesInAMonth(Month, Year) << endl;
		cout << "Number Of Seconds in Month [" << Month << "] is " << NumberOfSecondsInAMonth(Month, Year) << endl;
	*/

	// Problem 7
	/*
	short Year = ReadPositiveNumber("Enter Year? ");
	short Month = ReadPositiveNumber("Enter Month? ");
	short Day = ReadPositiveNumber("Enter Day? ");

	cout << "Date       :" << Day << "/" << Month << "/" << Year << endl;
	cout << "Day Order  :" << DayOfWeekOrder(Day, Month, Year) << endl;
	cout << "Day Name   :" << DayShortName(DayOfWeekOrder(Day, Month, Year)) << endl;
	*/

	// Problem 8
	/*
	short Year = ReadPositiveNumber("Enter Year? ");
	short Month = ReadPositiveNumber("Enter Month? ");
	PrintMonthCalender(Month, Year);
	*/

	// Problem 9
	/*
	short Year = ReadPositiveNumber("Enter Year? ");
	PrintYearCalender(Year);
	*/

	// Problem 10

	/*
	short Day = ReadPositiveNumber("Enter Day? ");
	short Month = ReadPositiveNumber("Enter Month? ");
	short Year = ReadPositiveNumber("Enter Year? ");
	short DaysOrderInYear = NumberOfDaysFromBeginingOfYear(Day, Month, Year);
	cout << "Number Of Days From the begining of the year is " << DaysOrderInYear << endl;

	*/

	// Problem 11
	/*
	sDate Date;
	Date = GetDateFromDayOrderInYear(DaysOrderInYear, Year);
	cout << "Date for [" << DaysOrderInYear << "] is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	*/

	// Problem 12
	/*
	short Day = ReadPositiveNumber("Enter Day? ");
	short Month = ReadPositiveNumber("Enter Month? ");
	short Year = ReadPositiveNumber("Enter Year? ");
	sDate Date;
	Date.Day = Day;
	Date.Month = Month;
	Date.Year = Year;
	short Days = ReadPositiveNumber("How many days to add? ");
	Date = DateAddDays(Days, Date);
	cout << "Date after adding [" << Days << "] days is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	*/


	// Problem 13
	/*
	sDate Date1, Date2;
	Date1 = ReadFullDate();
	Date2 = ReadFullDate();

	if (IsDate1BeforeDate2(Date1, Date2))
		cout << "Yes, Date1 is Less than Date2.\n";
	else
		cout << "No, Date1 is Not Less than Date2.\n";
	*/

	// Problem 14
	/*
	sDate Date1, Date2;
	Date1 = ReadFullDate();
	Date2 = ReadFullDate();

	if (IsDate1EqualToDate2(Date1, Date2))
		cout << "Yes, Date1 is Equal Date2.\n";
	else
		cout << "No, Date1 is Not Equal To Date2.\n";
	*/

	// Problem 15

	/*
	sDate Date = ReadFullDate();

	if (IsLastDayInMonth(Date))
		cout << "\nYes, Day is Last Day in Month.\n";
	else
		cout << "\nNo, Day is Not The Last Day in Month.\n";
	if (IsLastMonthInYear(Date.Month))
		cout << "\nYes, Month is Last Month in Year.\n";
	else
		cout << "\nNo, Month is Not Last Month in Year.\n";
	*/

	// Problem 16
	/*
	sDate Date = ReadFullDate();
	Date = IncreaseDateByOneDay(Date);
	cout << "Date After Adding One Day Is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	*/

	// Problem 17 && 19

	/*
		sDate Date1 = ReadFullDate();
		sDate Date2 = ReadFullDate();
		cout << "Difference is: " << GetDifferenceInDays(Date1, Date2) << " Day(s)\n";
		cout << "Difference (Including End Day) is: " << GetDifferenceInDays(Date1, Date2, true) << " Day(s)\n";;
	*/

	// Problem 18

	/*
	cout << "Enter Your Date Of Birth: \n";
	sDate Date = ReadFullDate();
	cout << "\n\nYour Age is : " << CalculateAgeInDays(Date) << endl;
	*/

	// Problem From 20 To 32
	/*
	cout << "Enter Your Date Of Birth: \n";
	sDate Date = ReadFullDate();

	Date = IncreaseDateByOneDay(Date);
	cout << "Adding One Day Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXDays(Date, 10);
	cout << "Adding 10 Days Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneWeek(Date);
	cout << "Adding One Week Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXWeeks(Date, 10);
	cout << "Adding 10 Weeks Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneMonth(Date);
	cout << "Adding One Month Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXMonths(Date, 5);
	cout << "Adding 5 Months Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneYear(Date);
	cout << "Adding One Year Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXYears(Date, 10);
	cout << "Adding 10 Years Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXYearsFaster(Date, 10);
	cout << "Adding 10 Years Faster Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneDecade(Date);
	cout << "Adding One Decade Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXDecades(Date, 10);
	cout << "Adding 10 Decades Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXDecadesFaster(Date, 10);
	cout << "Adding 10 Decades Faster Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneCentury(Date);
	cout << "Adding One Century Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneMillennium(Date);
	cout << "Adding One Millennium Is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	*/

	// Problem #33 to #46

	/*
	cout << "Enter Your Date Of Birth: \n";
	sDate Date = ReadFullDate();
	Date = DecreaseDateByOneDay(Date);
	cout << "Subtracting one day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXDays(Date, 10);
	cout << "Subtracting 10 days is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneWeek(Date);
	cout << "Subtracting One Week is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXWeeks(Date, 10);
	cout << "Subtracting 10 Week is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneMonth(Date);
	cout << "Subtracting One Month is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXMonths(Date, 5);
	cout << "Subtracting 5 Months is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneYear(Date);
	cout << "Subtracting One Year is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXYears(Date, 10);
	cout << "Subtracting 10 Years is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXYearsFaster(Date, 10);
	cout << "Subtracting 10 Years Faster is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneDecade(Date);
	cout << "Subtracting One Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXDecades(Date, 10);
	cout << "Subtracting 10 Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXDecadesFaster(Date, 10);
	cout << "Subtracting 10 Decade Faster is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneCentury(Date);
	cout << "Subtracting One Century is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneMillennium(Date);
	cout << "Subtracting One Millennuim is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	*/

	// Problem #47 To #53

	// sDate Date = GetSystemDate();

	/*
	cout << "Enter Your Date Of Birth: \n";
	sDate Date = ReadFullDate();

	short DayOrder = DayOfWeekOrder(Date);
	cout << "Today is " << DayShortName(DayOrder) << " , " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	cout << "\nIs It End Of Week ?\n" << (IsEndOfWeek(Date) ? "Yes It's End Of Week." : "No Not End Of Week.") << endl;
	cout << "\nIs It Weekend? \n" << (IsWeekEnd(Date) ? "Yes It is a week end." : "No It's Not a week end.") << endl;
	cout << "\nIs It Business Day?\n" << (IsBusinessDay(Date) ? "Yes It's a Business Day" : "No Not a Business day") << endl;
	cout << "\nDays until end of week : " << DaysUntilTheEndOfWeek(Date) << " Day(s).\n";
	cout << "\nDays until end of month : " << DaysUntilTheEndOfMonth(Date) << " Day(s).\n";
	cout << "\nDays until end of year : " << DaysUntilTheEndOfYear(Date) << " Day(s).\n";
	*/

	// Problem #54
	/*
	sDate DateFrom{}, DateTo{};
	cout << "Vacation Sarts:";
	DateFrom = ReadFullDate();
	cout << "\nVacation Ends:";
	DateTo = ReadFullDate();
	short StartingDayOrder = DayOfWeekOrder(DateFrom);
	cout << "Today is " << DayShortName(StartingDayOrder) << " , " << DateFrom.Day << "/" << DateFrom.Month << "/" << DateFrom.Year << endl;
	short EndingDayOrder = DayOfWeekOrder(DateTo);
	cout << "Today is " << DayShortName(EndingDayOrder) << " , " << DateTo.Day << "/" << DateTo.Month << "/" << DateTo.Year << endl;
	cout << "\n\nActual Vacation Days is: " << CalculateActualVactaion(DateFrom, DateTo) << endl;
	*/

	// Problem #55
	/*
	cout << "Vacation Starts:";
	sDate DateFrom = ReadFullDate();;
	short VacationDays = 0;
	cout << "\nPlease enter vacation days? ";
	cin >> VacationDays;
	DateFrom = CalculateVactionReturnDate(DateFrom, VacationDays);
	cout << "\n\nReturn Date: ";
	short DayOrder = DayOfWeekOrder(DateFrom);
	cout << "Today is " << DayShortName(DayOrder) << " , " << DateFrom.Day << "/" << DateFrom.Month << "/" << DateFrom.Year << endl;
	*/

	// Problem #56

	/*
	sDate Date1{}, Date2{};
	cout << "Enter Date1: ";
	Date1 = ReadFullDate();
	cout << "\nEnter Date2: ";
	Date2 = ReadFullDate();

	if (IsDate1AfterDate2(Date1, Date2))
		cout << "Yes, Date1 is After Date2.\n";
	else
		cout << "No, Date1 is Not After Date2.\n";
	*/

	// Problem #57

	/*
	cout << "\nEnter Period :";
	sPeriod Period = ReadPeriod();
	cout << "\nCompare Result = " << CompareDates(Period.StartDate, Period.EndDate) << endl;
	*/

	// Problem #58

	/*
	cout << "\nEnter Period1 :";
	sPeriod Period1 = ReadPeriod();

	cout << "\nEnter Period2 :";
	sPeriod Period2 = ReadPeriod();

	if (IsOverLapPeriods(Period1, Period2))
	cout << "\Yes, Priods Overlap\n";
	else
	cout << "\nNo, Periods do not Overlap\n";
	*/

	// Problem #59

	/*
	cout << "\nEnter Period1 :";
	sPeriod Period = ReadPeriod();
	cout << "\nPeriod Length is: " << PeriodLengthInDays(Period);
	cout << "\nPeriod Length (Including End Date) is: " << PeriodLengthInDays(Period, true);
	*/

	// Problem #60

	/*
	cout << "\nEnter Period1 :";
	sPeriod Period = ReadPeriod();

	cout << "\nEnter Date to check:";
	sDate Date = ReadFullDate();

	if (IsDateWithinPeriod(Date, Period))
		cout << "Yes, Date is within period";
	else
		cout << "No, Date is not within period";
	*/

	// Problem #61
	/*
	cout << "\nEnter Period 1 : ";
	sPeriod Period1 = ReadPeriod();

	cout << "\nEnter Period 2 : ";
	sPeriod Period2 = ReadPeriod();

	cout << "\nOverlap Days Count Is " << CountOverLapDays(Period1, Period2);
	*/

	// Problem #62
	/*
	sDate Date = ReadFullDate();
	if (IsDateValidated(Date))
		cout << "Yes, Date is Validate date.\n";
	else
		cout << "No, Date is a NOT validate date.";
	*/

	// Problem #63 && Problem #64
	/*
	string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? ");
	sDate Date = StringToDate(DateString);
	cout << "\nDay:" << Date.Day << endl;
	cout << "Month:" << Date.Month << endl;
	cout << "Year:" << Date.Year << endl;
	cout << "\nYou Entered: " << DateToString(Date) << endl;
	*/

	// Problem #65
	string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? ");
	sDate Date = StringToDate(DateString);
	cout << "\n" << FormateDate(Date) << "\n";
	cout << "\n" << FormateDate(Date, "yyyy/dd/mm") << "\n";
	cout << "\n" << FormateDate(Date, "mm/dd/yyyy") << "\n";
	cout << "\n" << FormateDate(Date, "mm-dd-yyyy") << "\n";
	cout << "\n" << FormateDate(Date, "dd-mm-yyyy") << "\n";
	cout << "\n" << FormateDate(Date, "Day:dd, Month:mm, Year:yyyy") << "\n";

	system("pause>0");
	return 0;
}
