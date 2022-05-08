class recruiter{
  private:
    int r_ID;
    char[50] r_Name;
    char[50] r_Address;
    char[20] r_email;
    int r_NIC;
    char[20] comapanyName;
    char[20] position;
    int contactNo;


  public:
    Login(); 
    Register();
    postjobs();
    editpost();
    viewApplicants();
    createCompanyprofile();
    editCompanyprofile();
    acceptApplications();
    rejectApplications();
   
}

class administrator{
  private:
    int adminID;
    char[20] adminUsername;
    char[20] adminPassword;
    char[50] adminName;
    char[20] adminEmail;
    char[20] adminNIC;
    char[50] adminAddress;

  public:
    login();
    viewAccounts();
    manageAccounts();

}

class application{
  private:
    int applicationID;
    int applicantName;
    char[50] applicantAddress;
    char[20] applicantEmail;
    int applicantMobileNo;
    int age;
    char[50] applicantExperience;
    char[50] applicantQualifications;
    char[50] CompanyName;
    char[20] CompanyPosotion;
    char[20] appliedDate;

  public:
    sendApplication();
    editApplication();

}
