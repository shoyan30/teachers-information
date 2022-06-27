#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{

    int choice;
    printf("\n\n");
    system("cls");
    system("COLOR 9");
    printf("\t\t\t\tBangladesh Army University of Science and Technology (BAUST)\n");
    printf("\t\t\t\t    -----------------------------------------------\n");
    printf("\t\t\t\t    |           Name of All Departments           |\n");
    printf("\t\t\t\t    -----------------------------------------------\n");
    printf("\t\t\t\t    |1.Computer Science and Engineering (CSE)     |\n");
    printf("\t\t\t\t    -----------------------------------------------\n");
    printf("\t\t\t\t    |2.Electronic and Electronic Engineering(EEE) |\n");
    printf("\t\t\t\t    -----------------------------------------------\n");
    printf("\t\t\t\t    |3.Mechanical Engineering(ME)                 |\n");
    printf("\t\t\t\t    -----------------------------------------------\n");
    printf("\t\t\t\t    |4.Industrial and Production Engineering(IPE) |\n");
    printf("\t\t\t\t    -----------------------------------------------\n");
    printf("\t\t\t\t    |5.Business Administration (DBA)              |\n");
    printf("\t\t\t\t    -----------------------------------------------\n");
    printf("\t\t\t\t    |6.Arts and Science                           |\n");
    printf("\t\t\t\t    -----------------------------------------------\n");
    printf("\t\t\t\t    |7.English  (ENG)                             |\n");
    printf("\t\t\t\t    -----------------------------------------------\n");
    //printf("\n");


    printf("Enter your department serial number (1 to 7): ");
    scanf("%d",&choice);

    if (choice==1)
    {
        int choice;
        system("COLOR 2");
        system("cls");
        printf("\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |        Name of All Teachers  of CSE         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |1. Dr. Md. Mamunur Rashid                    |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |2. Dr. Mohammad Sowket  Ali                  |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |3.Md.Mamun Hossain                            |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |4. Nakib Hayat Chowdhury                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |5. Atiquer Rahman Sarkar                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |6. S.M. Sadakatul Bari                       |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |7.  Fatima Jahan Sarmin                      |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |8.    Md. Moazzem Hossain                    |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |9.   Taher Muhammad Mahdee                   |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |10.     Sumya Akter                          |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |11.    Md. Sydur Rahman                      |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |12.    Md. Shajalal                          |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |13.   Fatema Tuz Zohra                       |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |14.    Md. Al-Hasan                          |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |15.     Istiaque Ahmed                       |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |16.    Abu Saleh Musa Miah                   |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\n");



        printf("Enter your serial number(1 to 17):  ");
        scanf("%d",&choice);



        if(choice==1)
        {
            int choice;
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Dr. Md. Mamunur Rashid\n");
            printf("Designation: Dean, Faculty of CEE, Head of the Dept. & Associate Professor\n");
            printf("Department: Computer Science & Engineering\n");
            printf("Qualification: B.Sc. & M.Sc. (CSE Dept. Rajshahi University),Ph.D. in Engg. (MITHT, Russia)\n");
            printf("Research Interest: Operating System, Data Warehouse & Mining\n");
            printf("Mobile: 01769675558\n");
            printf("E-mail: dmmr@baust.edu.bddean_foe@baust.edu.bd, hdcse@baust.edu.bdmamunst2003@yahoo.com\n");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }

        if(choice==2)

        {
            system("COLOR 3");
            system("cls");
            printf("Dr. Mohammed Sowket Ali\n");
            printf("Designation: Assistant Professor    \n");
            printf("Department: Computer Science & Engineering  \n");
            printf("Qualification: PhD. in Nano-IT Engineering (Korea),M.Engg., B.Sc. Engg., MIEB, MBCS, IAENG   \n");
            printf("Research Interests: Control Theory and Application.   \n");
            printf("Mobile:+8801791895371    \n");
            printf("E-mail:sowket@baust.edu.bd sowket@gmail.com    \n");
            printf("\nTry another search?(y/n)");

            if(getch()=='y')
                main();
            else
                exit(0);
        }
        if(choice==3)

        {
              system("COLOR 3");
              system("cls");
              printf("personal information:\n");
              printf("Md. Mamun Hossain\n");
              printf("Designation: Assistant Professor\n");
              printf("Department: Computer Science & Engineering\n");
              printf("Qualification: B.Sc.(Engg.) & M.Sc.(Thesis) in CSE, SUST.\n");
              printf("Research Interest: Data Compression, Big Data, Web Security, Deep Learning.\n");
              printf("Mobile:+8801717690847    \n");
              printf("E-mail: mamunsust12@gmail.com mhossain@baust.edu.bd \n");
              printf("\nTry another search?(y/n)");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==4)

        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("Nakib Hayat Chowdhury\n");
             printf("Designation: Assistant Professor\n");
             printf("Department: Computer Science and Engineering\n");
             printf("Qualification: B.Sc. (Hons.) and  M.Sc. (Thesis)  in CSE University of Rajshahi\n");
             printf("Research Interest: Robotics and Control System, Algorithm andProblem Solving\n");
             printf("Mobile:+8801190728800  \n");
             printf("E-mail:nakib@baust.edu.bdnakib2025@gmail.com\n");
             printf("\nTry another search?(y/n)");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==5)

        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("Atiquer Rahman Sarkar\n");
             printf(" Designation: Assistant Professor (Prime Minister Gold Medalist)\n");
             printf("Department: Computer Science & Engineering\n");
             printf("Qualification: M.Sc. (Thesis), B.Sc(Hons) in CSE\n");
             printf("Research Interest: Algorithm, Data Mining\n");
             printf("Mobile:+8801750724488\n");
             printf("E-mail: a.r.sarkar88@gmail.com\n");
             printf("\nTry another search?(y/n)");
            if(getch()=='y')
                main();
            else
               exit(0);

        }
        if(choice==6)

        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("S. M. Sadakatul Bari\n");
            printf("Designation: Assistant Professor  \n");
            printf("Department: Computer Science & Engineering  \n");
            printf("Qualification: PhD in Engineering (IIUM, Malaysia),M.Sc. in Computer & Information Engineering (IIUM, Malaysia),B.Sc. in Computer Science & Engineering (CUET). \n");
            printf("Research Interest: Digital Signal Processing, Brain Computer InterfacingInternet of Things( IoT),Computer Networks, Wireless Network,Internet Protocol. \n");
            printf("Mobile:+8801737942409 \n");
            printf("E-mail: sms_bari@yahoo.com  \n");
            printf("\nTry another search?(y/n)");
            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==7)

        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Fatima Jahan Sarmin\nDesignation: Lecturer\nDepartment: Computer Science & Engineering\nQualification: B.Sc. Engg. in Computer Science & Engineering, RUET\nResearch Interest: GIS.\nMobile:+8801738659797\nE-mail: fjsarmin@gmail.com     ");
            printf("\nTry another search?(y/n)");
            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==8)

        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Md. Moazzem Hossain\nDesignation: Lecturer\nDepartment: Computer Science & Engineering\nQualification: B.Sc. Engg. in Computer Science & Engineering, RUET\nResearch Interest: Image Processing, Machine Learning, Data Mining.\nMobile:+8801719363034\nE-mail: moazzem.cse10@gmail.commoazzem@baust.edu.bd");
            printf("\nTry another search?(y/n)");
            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==9)

        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("Taher Muhammad Mahdee\nDesignation: Lecturer\nDepartment: Computer Science & Engineering\nQualification: M.Sc. (Thesis), B.Sc. (Hons) in CSE\nResearch Interest: Parallel Processing, GPGPU, Cryptography, IOT\nMobile:+8801717244737\nE-mail: t.mahdee@gmail.com");
             printf("\nTry another search?(y/n)");
            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==10)

        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Sumya Akter\nDesignation: Lecturer (Prime Minister Gold Medalist)\nDepartment: Computer Science & EngineeringQualification: B.Sc. in Computer Science & Engineering, HSTU.Research \nInterest: Data Mining, Cloud Computing, Big Data.\nMobile:+8801763226821\nE-mail: sumya.hstu@gmail.com");
            printf("\nTry another search?(y/n)");
            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==11)

        {
            system("COLOR 3");
            system("cls");

            printf("personal information:\n");
            printf("Md. Sydur Rahman\nDesignation: Lecturer\nDepartment: Computer Science & Engineering\nQualification: B.Sc. Engg. in CSE, RUET, M.Sc. in CSE (Ongoing), RUET\nResearch Interest: Image Processing, Data Mining, Machine Learning.\nMobile:+8801721915157, 01521479908\nE-mail: sydur.ruet.113044@gmail.com,  msr@baust.edu.bd");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==12)

        {
           system("COLOR 3");
           system("cls");
           printf("personal information:\n");
           printf("Md.Shajalal\nDesignation:Lecturer\nDepartment:Computer Science & Engineering\nQualification:B. Sc. Engg in CSE,CU,M.Sc.Engg in CSE,Japan.Research\nInterest:Web Search,Information RetrievalSentiment Analysis,Natural Language Processing.Personal\n Webpage: https://sites.google.com/site/mdshajalalresume/ \nMobile:+8801725-359628\nE-mail: mdshajalal.cse@gmail.comshajalal@baust.edu.bd");
           printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==13)

        {
             system("COLOR 3");
             system("cls");

             printf("personal information:\n");
            printf("Fatema Tuz Zohra\nDesignation: Lecturer\nDepartment: Computer Science & Engineering\nQualification: B. Sc. Engg in CSE, CUET.Research \nInterest: Cryptography and Security, Image Processing, Database\nMobile:+8801774-383961\nE-mail: fatematuzzohramishu@gmail.comfatema@baust.edu.bd");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==14)

        {
             system("COLOR 3");
             system("cls");

             printf("personal information:\n");

            printf("Md. Al-Hasan\nDesignation: Lecturer\nDepartment: Computer Science & Engineering\nQualification: B. Sc. Engg in CSE, CUET, M.Sc. in CSE (JU).Research\n Interest: Big Data, Artificial IntelligenceData Science, Machine Learning,Data Warehouse, Business Intelligence.Personal Website\nMobile:+8801722-774004\nE-mail: hasan07cse@gmail.comal-hasan@baust.edu.bd");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==15)

        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
            printf("Istiaque Ahmed\nDesignation: Lecturer  (On Leave)\nDepartment: Computer Science & Engineering\nQualification: B.Sc. in CSE (RU), M.Sc. in CSE (RU)Research\n Interest: IoT, Pattern Recognition and Image Processing\nMobile:+8801717584966\nE-mail: isti.ru.cse@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==16)

        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Abu Saleh Musa Miah\nDesignation: Lecturer\nDepartment: Computer Science & Engineering\nQualification: B.Sc. Engg. & M.Sc. Engg (Thesis) M.Phil (Ongoing), RUResearch\n Interest: Digital Signal Processing, Brain Computer InterfacingBioinformatics, Computer VisionPersonal Website\nMobile:+8801734264899\nE-mail: abusalehcse.ru@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);
        }
    }

    if (choice==2)
    {

        int choice;
        system("COLOR 3");
        system("cls");
        printf("\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |        Name of All Teachers  of EEE         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |1. Ashrafun Naher Pinky                      |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |2. Mafin Muntasir Rahman                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |3. Md. Maksudur Rahman                       |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |4. Md. Fahim-Al-Fattah                       |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |5. Md. Abu Bakar Siddik                      |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |6. Tahasin Ahmed Fahim                       |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |7.  Md. Alimul Islam Salim                   |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |8.  Mst. Farzana Khatun                      |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |9. A. M. Mahfuz-Ur-Rahman (on Study Leave)   |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |10. Sarafat Hussain Abhi                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |11. Md. Shoaib Akther                        |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |12. Omar Faruqe                              |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |13. Rony Tota                                |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |14. Md. Hassanul Karim Roni                  |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |15. Md. Kamran Chowdhury Shisher             |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |16. Md. Abdul Malek                          |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\n");

        printf("Enter your serial number(1 to 16):  ");
        scanf("%d", &choice);

        if(choice==1)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Ashrafun Naher Pinky\nDesignation: Assistant Prof. & Head of the Dept.\nDnepartment: Electrical & Electronic EngineeringQualification: B.Sc. in EEE (RUET), M.Sc in EEE (RUET)\nResearch Interest: Renewable energy, Nano Technology.\nMobile: 01769675560, 01745422730\nE-mail: hdeee@baust.edu.bd, ashrafunnaher@baust.edu.bdash.pink.51@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==2)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf(" Mafin Muntasir Rahman\nDesignation: Assistant Prof. (EEE)\nDepartment: Electrical & Electronic Engineering\nQualification: B.Sc. in EEE (RUET)\nResearch Interest: Power System, Renewable Energy.\nMobile: +8801914254599, +8801762355745\nE-mail: mafin.eee.ruet07@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==3)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Md. Maksudur Rahman\nDesignation: Lecturer (EEE)\nDepartment: Electrical & Electronic Engineering\nQualification: B.Sc. in EEE (CUET), M. Sc. in EEE (pursuing, IUT,OIC)\nResearch interest: Microprocessor and Embedded systemVLSI Design and Applications.\nMobile:+8801553643480\nE-mail: maksud@baust.edu.bd, maksudcueteee08@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==4)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf(" Md. Fahim-Al-Fattah\nDesignation: Lecturer (EEE) (On Leave)\nDepartment: Electrical & Electronic Engineering\nQualification: B.Sc. in EEE (KUET)\nResearch Interest: Modeling and Fabrication of Graphene DevicesNEGF, Nanotechnology.https://scholar.google.com/citations?user=p7HVjMAAAAAJ&hl=en\nMobile:.......\nE-mail: fahim057@gmail.com, fahim@baust.edu.bd");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }


        if(choice==5)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf(" Md. Abu Bakar Siddik\nDesignation: Lecturer (EEE)\nDepartment: Electrical & Electronic Engineering\nQualification: B.Sc. in EEE (RUET)\nResearch Interest: Optical Fiber Communication System.\nMobile:+8801751845219\nE-mail: abubakarsiddik24@gmail.com  ");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==6)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Tahasin Ahmed Fahim\nDesignation: Lecturer (EEE)\nDepartment: Electrical & Electronic Engineering\nQualification: B.Sc. in EEE (RUET)\nResearch Interest: Biomedical Engineering, Big Data, Cloud Computing\nMobile:+8801615232322\nE-mail: tahasin.fahim.bd@ieee.org, tahasin@baust.edu.bd");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==7)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf(" Md. Alimul Islam Salim\nDesignation: Lecturer (EEE)\nDepartment: Electrical & Electronic Engineering\nQualification: B.Sc. in EEE (RUET)\nResearch Interest: Power System, Renewable Energy.\nMobile:+8801755191038\nE-mail: islamsalim111004@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==8)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf(" Mst. Farzana Khatun\nDesignation: Lecturer (EEE)\nDepartment: Electrical & Electronic Engineering\nQualification: B.Sc. Enginering in EEE (RUET)\nResearch Interest: Renewable Energy (Wind Energy).\nMobile:+8801750222867\nE-mail: farzana0071@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==9)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf(" A. M. Mahfuz-Ur-Rahman (on Study Leave)\nDesignation: Lecturer (EEE)\nDepartment: Electrical & Electronic Engineering\nQualification: B.Sc. in EEE (RUET)\nResearch Interest: Power Converter, Pulse Width Modulation Techniques,Grid Integration of Renewable Energy Resources.https://www.researchgate.net/profile/A_M_Mahfuz_Ur_Rahmanhttps://scholar.google.com/citations?user=ODkGSbAAAAAJ&hl=en\nMobile:+8801747088246\nE-mail: mahfuzbappi68@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==10)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Sarafat Hussain Abhi\nDesignation: Lecturer\nDepartment: Electrical & Electronic Engineering\nQualification: B. Sc. Engg in EEE (RUET)\nResearch Interest: Nanotechnology\nMobile:+8801989-563603\nE-mail: sarafat.rueteee@gmail.com");
            printf("\nTry another search?(y/n)");

             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==11)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Md. Shoaib Akther\nDesignation: Lecturer\nDepartment: Electrical & Electronic Engineering\nQualification: B. Sc. Engg in EEE (RUET), M. Sc. in EEE (Pursuing)(RUET)\nResearch Interest: Photonics, Nanotechnology, Optical FiberHigh Voltage Engineering\nMobile:+8801732367887, +8801992288059\nE-mail: shoaibkiron@gmail.com, kironeee11@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);
        }
        if(choice==12)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Omar Faruqe\nDesignation: Lecturer\nDepartment: Electrical & Electronic EngineeringQualification: B. Sc. Engg in EEE (MIST)\nResearch Interest: NanotechnologyVLSI Design and Farbication Process\nMobile:+8801684051835\nE-mail: ofaruqe20@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==13)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf(" Rony Tota\nDesignation: Lecturer\nDepartment: Electrical & Electronic Engineering\nQualification: B. Sc. Engg in EEE\nResearch Interest: Renewable Energy\nMobile:+8801738778498\nE-mail: ronytota98@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==14)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Md. Hassanul Karim Roni\nDesignation: Lecturer\nDepartment: Electrical & Electronic Engineering\nQualification: B. Sc. Engg in EEE (RUET)\nResearch Interest: Control System, Renewable Energy, Machine LearningDigital Signal Processing\nMobile:+8801767 052709\nE-mail: hassanulkarim.roni@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==15)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("Md. Kamran Chowdhury Shisher\nDesignation: Lecturer  (On Leave)\nDepartment: Electrical & Electronic Engineering\nQualification: B. Sc. Engg in EEE (BUET)\nResearch Interest: Communication and NetworkingWireless Communication.\nMobile:...................\nE-mail: 1541kamran@gmail.com,  kamran@baust.edu.bd");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==16)
        {
            system("COLOR 3");
            system("cls");


            printf("personal information:\n");
            printf("Md. Abdul Malek\nDesignation: Lecturer\nDepartment: Electrical & Electronic Engineering\nQualification: B. Sc. Engg in EEE (RUET)\nResearch Interest: Power Electronics\nMobile:01755273077\nE-mail: m.a.malekb88@gmail.com");
            printf("\nTry another search?(y/n)");
             if(getch()=='y')
                main();
            else
                exit(0);
        }

    }

    if (choice==3)
    {
        int choice;
        system("COLOR 3");
        system("cls");
        printf("\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |        Name of All Teachers  of ME          |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |1. Professor Dr. Md Lutfor Rahman            |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |2. Robiul Islam Rubel                        |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |3. Sk. Suzauddin Yusuf                       |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |4. Md. Mahmodul Alam                         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |5. K. M. Mohiuddin Abeer                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |6. Md. Washim Akram                          |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |7. Md. Abdur Rahim Hera                      |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |8. Md. Abu Jafor                             |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |9. Md. Abdus Shabur                          |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |10.Md. Hasan Ali                             |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");




        printf("\n");

        printf("Enter your serial number(1-10): ");
        scanf("%d", &choice);

        if(choice==1)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==2)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==3)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==4)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("bsc in cse at baust");


            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==5)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
        }
        if(choice==6)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==7)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==8)
        {
            system("COLOR 3");
            system("cls");
            printf("personal information:\n");
            printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==9)
                {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==10)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }

    }

    if (choice==4)
    {
        int choice;
         system("COLOR 3");
        system("cls");
        printf("\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |        Name of All Teachers  of IPE         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |1. Professor Dr. Naseem Ahmed                |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |2. Md.Rasel Sarkar                           |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |3. Md. Hasan Ali                             |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |4. Md. Firoz Kabir                           |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |5. Md. Abubakar Siddique                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |6. Rakesh Roy                                |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\n");

        printf("Enter your serial number (1-6): ");
        scanf("%d", &choice);

        if(choice==1)
            {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==2)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==3)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==4)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==5)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
        if(choice==6)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==7)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==8)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==9)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==10)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==11)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==12)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==13)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==14)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==15)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==16)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }


    }


    if (choice==5)
    {
        int choice;
        system("COLOR 3");
        system("cls");
        printf("\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |        Name of All Teachers  of DBA         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |1. Mohammad Bin Amin                         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |2. Major Md. Mizanur Rahman,G(Rtd)           |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |3. Md. Zaber Hossain                         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |4. Mohotarema Rashid                         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |5. Morzina Islam                             |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |6. Jinia Afroz Sharmin                       |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |7. Rakibul Islam                             |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |8. Lima Nasrin Eni                           |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |9. Rabbir Rashedin Tirno                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |10. Md. Jahedul Islam                        |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\n");

        printf("Enter your serial number(1 to 10):  ");
        scanf("%d", &choice);

          if(choice==1)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==2)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==3)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==4)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==5)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==6)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
                 if(choice==7)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==8)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==9)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==10)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
      }
    }
    if (choice==6)
    {
        int choice;
        system("COLOR 3");
        system("cls");
        printf("\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |        Name of All Teachers  of A&S         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |1. Dr. Kazi Mohammad Anamoul Haque           |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |2. Md. Tarikal Nasir                         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |3. Md. Khorshed Alam                         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |4. Shahanaz Pervin                           |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |5. Mst. Ummey Kulsum                         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |6. Md. Aynul Habib                           |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |7. Md. Mehadi Hasan                          |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |8. Md. Mizanur Rahman                        |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |9. Al-Mahmud                                 |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |10. Md. Abu Rayhan                           |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |11. Al Rafat                                 |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |12. Md. Mahbub Rahman                        |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\n");

        printf("Enter your serial number (1-12): ");
        scanf("%d", &choice);

          if(choice==1)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==2)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==3)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==4)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==5)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==6)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
    if(choice==7)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==8)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==9)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==10)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
      }
       if(choice==11)
      {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
      }
       if(choice==12)
      {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
      }
    }
    if (choice==7)
    {
        int choice;
        system("COLOR 3");
        system("cls");
        printf("\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |        Name of All Teachers  of ENG         |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |1. Mst. Shahanaz Khanam                      |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |2. Amir Mohammad Khan                        |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |3. Md. Ashikullah                            |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |4. Md. Raihan-Bin-Shafiq                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |5. Fahmida Hoque Meem                        |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |6. Sameer Shamsir Rahman                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\t\t\t\t    |7. Most. Mushfeka Zannat                     |\n");
        printf("\t\t\t\t    -----------------------------------------------\n");
        printf("\n");

        printf("Enter your serial number (1-7): ");
        scanf("%d", &choice);




          if(choice==1)
        {
            system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);

        }
         if(choice==2)
        {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==3)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==4)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==5)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
     if(choice==6)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
    if(choice==7)
    {
             system("COLOR 3");
             system("cls");
             printf("personal information:\n");
             printf("bsc in cse at baust");

            if(getch()=='y')
                main();
            else
                exit(0);
    }
    }
    else
    {
        printf("Error!");
    }

    return 0;

    }
