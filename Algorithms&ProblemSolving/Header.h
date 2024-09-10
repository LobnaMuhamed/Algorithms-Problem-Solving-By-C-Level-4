#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;
namespace MyLib {
	int ReadPositiveNumber(string Mess)
	{
		int Number;
		cout << Mess;
		cin >> Number;
		return Number;
	}

	// Problem #01
	string NumberToText(int Number)
	{
		if (Number == 0)
			return "";
		if (Number >= 1 && Number <= 19)
		{
			string arr[] = { "", "One", "Two", "Three", "Four",
				"Five", "Six", "Seven", "Eight", "Nine", "Ten"
				, "Eleven", "Twelve", "Thirteen", "Fourteen",
				"Fifteen", "Sixteen", "Seventeen", "Eighteen", "Ninteen" };
			return (arr[Number] + " ");
		}
		if (Number >= 20 && Number <= 99)
		{
			string arr[] = { "", "" ,  "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Ninty" };
			return (arr[Number / 10] + " " + NumberToText(Number % 10));
		}
		if (Number >= 100 && Number <= 199)
		{
			return ("One Hundred " + NumberToText(Number % 100));
		}
		if (Number >= 200 && Number <= 999)
		{
			return (NumberToText(Number / 100) + "Hundreds " + NumberToText(Number % 100));
		}
		if (Number >= 1000 && Number <= 1999)
		{
			return ("One Thousand " + NumberToText(Number % 1000));
		}
		if (Number >= 2000 && Number <= 999999)
		{
			return (NumberToText(Number / 1000) + "Thousands " + NumberToText(Number % 1000));
		}
		if (Number >= 1000000 && Number <= 1999999)
		{
			return ("One Million " + NumberToText(Number % 1000000));
		}
		if (Number >= 2000000 && Number <= 999999999)
		{
			return (NumberToText(Number / 1000000) + "Millionss " + NumberToText(Number % 1000000));
		}
		if (Number >= 1000000000 && Number <= 1999999999)
		{
			return ("One Billion " + NumberToText(Number % 1000000000));
		}
		else
		{
			return (NumberToText(Number / 1000000000) + "Billions " + NumberToText(Number % 1000000000));
		}

	}

	//Problem #02
	bool IsLeapYear(int Number)
	{
		if (Number % 400 == 0)
			return true;
		else {
			if (Number % 4 == 0 && Number % 100 != 0)
				if (Number % 4 == 0 && Number % 100 != 0)
					return true;
				else
					return false;
		}
	}

	// Problem #03
	bool IsLeapYearOneLine(int Number)
	{
		return ((Number % 400 == 0) || (Number % 4 == 0 && Number % 100 != 0));
	}

	// Problem #04
	short NumberOfDaysInAYear(short Year)
	{
		return (IsLeapYearOneLine(Year) ? 366 : 365);
	}
	short NumberOfHoursInAYear(short Year)
	{
		return NumberOfDaysInAYear(Year) * 24;
	}
	int NumberOfMinutesInAYear(short Year)
	{
		return NumberOfHoursInAYear(Year) * 60;
	}
	int NumberOfSecondsInAYear(short Year)
	{
		return NumberOfMinutesInAYear(Year) * 60;
	}

	// Problem #05 && #06
	short NumberOfDaysInAMonth(short Month, short Year)
	{
		short NumberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		return (Month == 2) ? (IsLeapYearOneLine(Year) ? 29 : 28) : NumberOfDays[Month - 1];
	}
	short NumberOfHoursInAMonth(short Month, short Year)
	{
		return NumberOfDaysInAMonth(Year, Month) * 24;
	}
	int NumberOfMinutesInAMonth(short Month, short Year)
	{
		return NumberOfHoursInAMonth(Year, Month) * 60;
	}
	int NumberOfSecondsInAMonth(short Month, short Year)
	{
		return NumberOfMinutesInAMonth(Year, Month) * 60;
	}

	// Prblem #07
	short DayOfWeekOrder(short Day, short Month, short Year)
	{
		short a, y, m;
		a = (14 - Month) / 12;
		y = Year - a;
		m = Month + (12 * a) - 2;
		return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	}
	string DayShortName(short Day)
	{
		string DaysInWeek[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri" , "Sat" };
		return DaysInWeek[Day];
	}

	// Problem #08
	string MonthShortName(short Month)
	{
		string MonthInYear[12] = { "Jan", "Feb", "Mar", "April",
								"May", "Jun" , "Jul", "Aug",
								"Sep", "Oct", "Nov", "Dec" };
		return MonthInYear[Month - 1];
	}
	/*
		// My Solution

		void PrintMonthCalender( short Month, short Year)
		{
			short DayInWeek = DayOfWeekOrder(Year, Month, 1);
			short Days = NumberOfDaysInAMonth(Year, Month);
			// Print the current month name
			printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());

			// Print the columns
			printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

			short NumOfDay = 1;
			while (NumOfDay <= Days)
			{
				for (short i = 0; i < 7; i++)
				{
					if (i < DayInWeek && NumOfDay <= (DayInWeek - NumOfDay))
						printf("     ");
					else
					{
						printf("%5d", NumOfDay);
						NumOfDay++;
					}
					if (NumOfDay > Days)
						break;
				}
				cout << endl;
			}
		}
	*/

	void PrintMonthCalender(short Month, short Year)
	{
		short NumberOfDays;

		// Index Of The Day From 0 To 6
		short current = DayOfWeekOrder(1, Month, Year);
		NumberOfDays = NumberOfDaysInAMonth(Month, Year);

		// Print The Current Month Name
		printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());

		// Print The Columns
		printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

		//Print appropriate spaces
		short i;
		for (i = 0; i < current; i++)
			printf("     ");

		for (short j = 1; j <= NumberOfDays; j++)
		{
			printf("%5d", j);
			if (++i == 7)
			{
				i = 0;
				printf("\n");
			}
		}
		printf("\n  _________________________________\n");
	}

	// Problem #09
	void PrintYearCalender(short Year)
	{
		printf("\n  _________________________________\n\n");
		printf("          Calender - %d\n", Year);
		printf("  _________________________________\n");

		for (short i = 1; i <= 12; i++)
		{
			PrintMonthCalender(i, Year);
		}
	}

	// Problem #10
	short NumberOfDaysFromBeginingOfYear(short Day, short Month, short Year)
	{
		short TotalDays = 0;
		for (short i = 1; i <= Month - 1; i++)
		{
			TotalDays += NumberOfDaysInAMonth(i, Year);
		}
		TotalDays += Day;
		return TotalDays;
	}
	// Problem #11
	struct sDate {
		short Year;
		short Month;
		short Day;
	};
	struct sPeriod {
		sDate StartDate;
		sDate EndDate;
	};
	sDate ReadFullDate()
	{
		sDate Date{};
		cout << "\n";
		Date.Day = ReadPositiveNumber("Enter Day? ");
		Date.Month = ReadPositiveNumber("Enter Month? ");
		Date.Year = ReadPositiveNumber("Enter Year? ");
		return Date;
	}
	sPeriod ReadPeriod()
	{
		sPeriod Period{};
		cout << "\nEnter Start Date:\n";
		Period.StartDate = ReadFullDate();
		cout << "\nEnter End Date:\n";
		Period.EndDate = ReadFullDate();
		return Period;
	}
	sDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year)
	{
		sDate Date{};
		short RemainingDays = DateOrderInYear;
		short MonthDays = 0;
		Date.Year = Year;
		Date.Month = 1;
		while (true) {
			MonthDays = NumberOfDaysInAMonth(Date.Month, Year);
			if (RemainingDays > MonthDays)
			{
				RemainingDays -= MonthDays;
				Date.Month++;
			}
			else
			{
				Date.Day = RemainingDays;
				break;
			}
		}
		return Date;
	}
	// Problem #12
	sDate DateAddDays(short Days, sDate Date)
	{
		short RemainingDays = Days + NumberOfDaysFromBeginingOfYear(Date.Day, Date.Month, Date.Year);
		short MonthDays = 0;
		Date.Month = 1;
		while (true)
		{
			MonthDays = NumberOfDaysInAMonth(Date.Month, Date.Year);
			if (RemainingDays > MonthDays)
			{
				RemainingDays -= MonthDays;
				Date.Month++;

				if (Date.Month > 12)
				{
					Date.Month = 1;
					Date.Year++;
				}
			}
			else
			{
				Date.Day = RemainingDays;
				break;
			}
		}
		return Date;
	}

	// Problem #13
	bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
	{
		return (Date1.Year < Date2.Year) ?
			true : ((Date1.Year == Date2.Year) ?
				((Date1.Month < Date2.Month) ? true :
					((Date1.Month == Date2.Month) ?
						Date1.Day < Date2.Day : false)) : false);
	}
	// Problem #14
	bool IsDate1EqualToDate2(sDate Date1, sDate Date2)
	{
		return ((Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day == Date2.Day));
	}
	// Problem #15
	bool IsLastDayInMonth(sDate Date)
	{
		return  (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
	}
	bool IsLastMonthInYear(short Month)
	{
		return (Month == 12);
	}
	// Problem #16
	sDate IncreaseDateByOneDay(sDate Date)
	{
		if (IsLastDayInMonth(Date))
		{
			if (IsLastMonthInYear(Date.Month))
			{
				Date.Day = 1;
				Date.Month = 1;
				Date.Year++;
			}
			else
			{
				Date.Day = 1;
				Date.Month++;
			}
		}
		else
			Date.Day++;
		return Date;
	}
	// Problem #17 & #19 With Update Same Function
	void SwapDates(sDate& Date1, sDate& Date2)
	{
		sDate TempDate{};
		TempDate.Day = Date1.Day;
		TempDate.Month = Date1.Month;
		TempDate.Year = Date1.Year;

		Date1.Day = Date2.Day;
		Date1.Month = Date2.Month;
		Date1.Year = Date2.Year;

		Date2.Day = TempDate.Day;
		Date2.Month = TempDate.Month;
		Date2.Year = TempDate.Year;

	}
	short GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
	{
		short Days = 0;
		short SwapFalgValue = 1;
		if (!IsDate1BeforeDate2(Date1, Date2))
		{
			SwapDates(Date1, Date2);
			SwapFalgValue = -1;
		}
		while (!IsDate1EqualToDate2(Date1, Date2))
		{
			if (IsDate1BeforeDate2(Date1, Date2))
			{
				Days++;
				Date1 = IncreaseDateByOneDay(Date1);
			}
		}
		return IncludeEndDay ? ++Days * SwapFalgValue : Days * SwapFalgValue;
	}
	// Problem #18
	sDate GetSystemDate()
	{
		sDate Date{};
		time_t t = time(0); // get time now
		tm* now = localtime(&t);
		Date.Year = now->tm_year + 1900;
		Date.Month = now->tm_mon + 1;
		Date.Day = now->tm_mday;
		return Date;
	}

	short CalculateAgeInDays(sDate Date)
	{
		sDate DateNow = GetSystemDate();
		return GetDifferenceInDays(Date, DateNow);
	}

	// Problem #20
	sDate IncreaseDateByXDays(sDate Date, short NumOfDays)
	{
		for (short i = 0; i < NumOfDays; i++)
			Date = IncreaseDateByOneDay(Date);
		return Date;
	}

	// Problem #21
	sDate IncreaseDateByOneWeek(sDate Date)
	{
		for (short i = 1; i <= 7; i++)
			Date = IncreaseDateByOneDay(Date);
		return Date;
	}

	// Problem #22
	sDate IncreaseDateByXWeeks(sDate Date, short NumOfWeeks)
	{
		for (short i = 1; i <= NumOfWeeks; i++)
			Date = IncreaseDateByOneWeek(Date);
		return Date;
	}

	// Problem #23
	sDate IncreaseDateByOneMonth(sDate Date)
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Year++;
		}
		else
			Date.Month++;
		short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);
		if (Date.Day > NumberOfDaysInCurrentMonth)
			Date.Day = NumberOfDaysInCurrentMonth;
		return Date;
	}

	// Problem #24
	sDate IncreaseDateByXMonths(sDate Date, short NumOfMonths)
	{
		for (short i = 0; i < NumOfMonths; i++)
			Date = IncreaseDateByOneMonth(Date);
		return Date;
	}

	// Problem #25
	sDate IncreaseDateByOneYear(sDate Date)
	{
		if (Date.Month == 2 && Date.Day == 29)
		{
			Date.Year++;
			Date.Day = 28;
		}
		else
			Date.Year++;
		return Date;
	}

	// Problem #26
	sDate IncreaseDateByXYears(sDate Date, short NumOfYears)
	{
		short StartingDay = Date.Day;
		for (short i = 0; i < NumOfYears; i++)
		{
			Date = IncreaseDateByOneYear(Date);
			if (IsLeapYearOneLine(Date.Year))
				Date.Day = StartingDay;
		}

		return Date;
	}

	// Problem #27
	sDate IncreaseDateByXYearsFaster(sDate Date, short NumOfYears)
	{
		Date.Year += NumOfYears;
		if (Date.Day > NumberOfDaysInAMonth(Date.Month, Date.Year))
			Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
		return Date;
	}

	// Problem #28
	sDate IncreaseDateByOneDecade(sDate Date)
	{
		Date.Year += 10;
		return Date;
	}

	// Problem #29
	sDate IncreaseDateByXDecades(sDate Date, short NumOfDecades)
	{
		for (short i = 0; i < NumOfDecades; i++)
			Date = IncreaseDateByOneDecade(Date);
		return Date;
	}

	// Problem #30
	sDate IncreaseDateByXDecadesFaster(sDate Date, short NumOfDecades)
	{
		Date.Year += NumOfDecades * 10;
		return Date;
	}

	// Problem #31
	sDate IncreaseDateByOneCentury(sDate Date)
	{
		Date.Year += 100;
		return Date;
	}

	// Problem #32
	sDate IncreaseDateByOneMillennium(sDate Date)
	{
		Date.Year += 1000;
		return Date;
	}

	// Problem #33
	sDate DecreaseDateByOneDay(sDate Date)
	{
		if (Date.Day == 1)
		{
			if (Date.Month == 1)
			{
				Date.Month = 12;
				Date.Year--;
			}
			else
				Date.Month--;
			Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
		}
		else
			Date.Day--;
		return Date;
	}

	// Problem #34
	sDate DecreaseDateByXDays(sDate Date, short Days)
	{
		for (short i = 1; i <= Days; i++)
			Date = DecreaseDateByOneDay(Date);
		return Date;
	}

	// Problem #35
	sDate DecreaseDateByOneWeek(sDate Date)
	{
		for (short i = 1; i <= 7; i++)
			Date = DecreaseDateByOneDay(Date);
		return Date;
	}

	// Problem #36
	sDate DecreaseDateByXWeeks(sDate Date, short Weeks)
	{
		for (short i = 1; i <= Weeks; i++)
			Date = DecreaseDateByOneWeek(Date);
		return Date;
	}

	// Problem #37
	sDate DecreaseDateByOneMonth(sDate Date)
	{
		if (Date.Month == 1)
		{
			Date.Month = 12;
			Date.Year--;
			Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
		}
		else
			Date.Month--;
		short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);
		if (Date.Day > NumberOfDaysInCurrentMonth)
			Date.Day = NumberOfDaysInCurrentMonth;
		return Date;
	}


	// Problem #38
	sDate DecreaseDateByXMonths(sDate Date, short Months)
	{
		for (short i = 1; i <= Months; i++)
			Date = DecreaseDateByOneMonth(Date);
		return Date;
	}

	// Problem #39
	sDate DecreaseDateByOneYear(sDate Date)
	{
		Date.Year--;
		if (Date.Day > NumberOfDaysInAMonth(Date.Month, Date.Year))
			Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
		return Date;
	}

	// Problem #40

	sDate DecreaseDateByXYears(sDate Date, short Years)
	{
		for (short i = Years; i > 0; i--)
			Date = DecreaseDateByOneYear(Date);
		return Date;
	}

	// Problem #41
	sDate DecreaseDateByXYearsFaster(sDate Date, short Years)
	{
		Date.Year -= Years;
		if (Date.Day > NumberOfDaysInAMonth(Date.Month, Date.Year))
			Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
		return Date;
	}

	// Problem #42
	sDate DecreaseDateByOneDecade(sDate Date)
	{
		Date.Year -= 10;
		return Date;
	}


	// Problem #43
	sDate DecreaseDateByXDecades(sDate Date, short Decades)
	{
		for (short i = 1; i <= Decades * 10; i++)
			Date = DecreaseDateByOneYear(Date);
		return Date;
	}

	// Problem #44
	sDate DecreaseDateByXDecadesFaster(sDate Date, short Decades)
	{
		Date.Year -= Decades * 10;
		return Date;
	}

	// Problem #45
	sDate DecreaseDateByOneCentury(sDate Date)
	{
		Date.Year -= 100;
		return Date;
	}

	// Problem #46
	sDate DecreaseDateByOneMillennium(sDate Date)
	{
		Date.Year -= 1000;
		return Date;
	}

	// Problem #47
	short DayOfWeekOrder(sDate Date)
	{
		return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
	}
	// Problem #48

	bool IsEndOfWeek(sDate Date)
	{
		return (DayOfWeekOrder(Date) == 6);
	}
	// Problem #49
	bool IsWeekEnd(sDate Date)
	{
		short DayIndex = DayOfWeekOrder(Date);
		return (DayIndex == 5 || DayIndex == 6);
	}
	// Problem #50
	bool IsBusinessDay(sDate Date)
	{
		return !IsWeekEnd(Date);
	}
	// Problem #51
	short DaysUntilTheEndOfWeek(sDate Date)
	{
		return 6 - DayOfWeekOrder(Date);
	}
	// Problem #52
	short DaysUntilTheEndOfMonth(sDate Date)
	{
		sDate EndOfMonthDate{};
		EndOfMonthDate.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
		EndOfMonthDate.Month = Date.Month;
		EndOfMonthDate.Year = Date.Year;
		return (GetDifferenceInDays(Date, EndOfMonthDate, true));
	}
	// Problem #53
	short DaysUntilTheEndOfYear(sDate Date)
	{
		sDate EndOfYearDate{};
		EndOfYearDate.Day = 31;
		EndOfYearDate.Month = 12;
		EndOfYearDate.Year = Date.Year;

		return GetDifferenceInDays(Date, EndOfYearDate, true);
	}

	// Problem #54
	short CalculateActualVactaion(sDate DateFrom, sDate DateTo)
	{
		short DaysCount = 0;
		while (IsDate1BeforeDate2(DateFrom, DateTo))
		{
			if (IsBusinessDay(DateFrom))
				DaysCount++;
			DateFrom = IncreaseDateByOneDay(DateFrom);
		}
		return DaysCount;
	}
	// Problem #55
	sDate CalculateVactionReturnDate(sDate DateFrom, short VacationDays)
	{
		short WeekEndCounter = 0;
		while (IsWeekEnd(DateFrom))
			DateFrom = IncreaseDateByOneDay(DateFrom);
		for (short i = 1; i <= VacationDays + WeekEndCounter; i++)
		{
			if (IsWeekEnd(DateFrom))
				WeekEndCounter++;
			DateFrom = IncreaseDateByOneDay(DateFrom);
		}
		while (IsWeekEnd(DateFrom))
			DateFrom = IncreaseDateByOneDay(DateFrom);
		return DateFrom;
	}

	// Problem #56
	bool IsDate1AfterDate2(sDate Date1, sDate Date2)
	{
		return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualToDate2(Date1, Date2));

	}
	// Problem #57
	enum enDateCompare { Before = -1, Equal = 0, After = 1 };
	enDateCompare CompareDates(sDate Date1, sDate Date2)
	{
		if (IsDate1BeforeDate2(Date1, Date2))
			return enDateCompare::Before;
		if (IsDate1AfterDate2(Date1, Date2))
			return enDateCompare::After;
		else
			return  enDateCompare::Equal;
	}
	// Problm #58
	bool IsOverLapPeriods(sPeriod Period1, sPeriod Period2)
	{
		return (!(CompareDates(Period2.EndDate, Period1.StartDate) ==
			enDateCompare::Before || CompareDates(Period2.StartDate, Period1.EndDate) ==
			enDateCompare::After));
	}

	// Problem #59
	int PeriodLengthInDays(sPeriod Period, bool IncludingEndDate = false)
	{
		return GetDifferenceInDays(Period.StartDate, Period.EndDate, IncludingEndDate);
	}

	// Problem #60
	bool IsDateWithinPeriod(sDate Date, sPeriod Period)
	{
		return !(CompareDates(Date, Period.StartDate) == enDateCompare::Before || CompareDates(Date, Period.EndDate) == enDateCompare::After);
	}

	// Problem #61
	short CountOverLapDays(sPeriod Period1, sPeriod Period2)
	{
		short Period1Length = PeriodLengthInDays(Period1, true);
		short Period2Length = PeriodLengthInDays(Period2, true);
		short OverLapDays = 0;

		if (!(IsOverLapPeriods(Period1, Period2)))
			return 0;
		if (Period1Length < Period2Length)
		{
			while (IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate))
			{
				if (IsDateWithinPeriod(Period1.StartDate, Period2))
					OverLapDays++;
				Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
			}
		}
		else
		{
			while (IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate))
			{
				if (IsDateWithinPeriod(Period2.StartDate, Period1))
					OverLapDays++;
				Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
			}
		}
		return OverLapDays;
	}

	// Problem #62
	bool IsDateValidated(sDate Date)
	{
		if (Date.Month >= 1 && Date.Month <= 12)
		{
			if (Date.Day >= 1 && Date.Day <= NumberOfDaysInAMonth(Date.Month, Date.Year))
				return true;
			else
				return false;
		}
		else
			return false;
	}

	// Problem #63

	vector <string> SplitString(string String, string delim = "/")
	{
		vector <string> vString;
		string sWord;
		short pos = 0;
		while ((pos = String.find(delim)) != std::string::npos)
		{
			sWord = String.substr(0, pos);
			if (sWord != "")
				vString.push_back(sWord);
			String.erase(0, pos + delim.length());
		}
		if (String != "")
			vString.push_back(String);
		return vString;
	}
	sDate StringToDate(string DateString)
	{
		sDate Date{};
		vector <string> vDate;
		vDate = SplitString(DateString, "/");
		Date.Day = stoi(vDate.at(0));
		Date.Month = stoi(vDate.at(1));
		Date.Year = stoi(vDate.at(2));
		return Date;
	}
	// Problem #64
	string DateToString(sDate Date)
	{
		return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
	}
	string ReadStringDate(string Message)
	{
		string DateString;
		cout << Message;
		getline(cin >> ws, DateString);
		return DateString;
	}

	// Problem #65
	string ReplaceWordInString(string S1, string StringToReplace, string sReplaceTo)
	{
		short pos = S1.find(StringToReplace);
		while (pos != std::string::npos)
		{
			S1.replace(pos, StringToReplace.length(), sReplaceTo);
			pos = S1.find(StringToReplace);
		}
		return S1;
	}
	string FormateDate(sDate Date, string DateFormat = "dd/mm/yyyy")
	{
		string FormattedDateString = "";
		FormattedDateString = ReplaceWordInString(DateFormat, "dd", to_string(Date.Day));
		FormattedDateString = ReplaceWordInString(FormattedDateString, "mm", to_string(Date.Month));
		FormattedDateString = ReplaceWordInString(FormattedDateString, "yyyy", to_string(Date.Year));
		return FormattedDateString;
	}

}



