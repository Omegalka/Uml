#pragma once
#include <string>
using namespace std;

class NameInfo {
public:
    string firstname;
    string surname;
    string lastname;
};

class LocationInfo {
public:
    string country;
    string region;
    string city;
    string street;
    int house_number;
};

class DateOfBirth {
public:
    int day;
    int month;
    int year;
};

class EnrollmentInfo {
public:
    DateOfBirth start_date;
    int kurs;
    string group_name;
    string specialization;
};

class AcademicPerformance {
public:
    int* dz_rates;
    int dz_count;
    int* practice_rates;
    int practice_count;
    int* exam_rates;
    int exam_count;
    int* zachet_rates;
    int zachet_count;
};

