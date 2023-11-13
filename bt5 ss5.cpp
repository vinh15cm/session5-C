#include<iostream>
using namespace std;

// Nhap ngay sinh cho biet cung hoang dao la cung j?

void Nhap_Ngay(int &ngay)
{
    do
    {
        cout << "\nNhap ngay: ";
        cin >> ngay;
        if(ngay < 0 || ngay > 31)
        {
            cout << "\nNgay sinh khong duoc qua 31. Vui long nhap lai.";
        }
    }while (ngay < 0 || ngay > 31);
    
}

void Nhap_Thang(int &thang)
{
    do
    {
        cout << "\nNhap thang: ";
        cin >> thang;
        if(thang < 0 || thang > 12)
            {
                cout << "\nThang sinh khong duoc qua 12. Vui long nhap lai.";
            }
        }while (thang < 0 || thang > 12);
}

void Xuat_Ngay_Sinh(int ngay, int thang)
{
    if(ngay < 10 & thang < 10)
    {
        cout << "\nNgay sinh cua ban: 0" << ngay << "-0" << thang;
    
    }
    else if (ngay < 10 & thang >= 10)
    {
        cout << "\nNgay sinh cua ban: 0" << ngay << "-" << thang;
    }
    else if (ngay > 10 & thang < 10)
    {
        cout << "\nNgay sinh cua ban: " << ngay << "-0" << thang;
    }
    else
    {
        cout << "\nNgay sinh cua ban: " << ngay << "-" << thang;
        
    }
    
}

int main()
{
    int ngay, thang;
    cout << "\n\n\t\tNHAP NGAY SINH CUA BAN: ";
    
    Nhap_Ngay(ngay);
    Nhap_Thang(thang);

    if((ngay >= 21 && thang == 3) || (ngay <= 19 && thang == 4))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " thuoc cung Bach Duong" << endl;
        
    }
    else if((ngay >= 20 && thang == 4) || (ngay <= 20 && thang == 5))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " thuoc cung Kim Nguu (20/04 - 20/05)" << endl;
    }
        
    else if((ngay >= 21 &&  thang == 5) || (ngay <= 21 && thang == 6))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " thuoc cung Song Tu (21/05 - 21/06)" << endl;
    }
    
    else if((ngay >= 22 &&  thang == 6) || (ngay <= 22 &&  thang == 7))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " thuoc cung Cu Giai" << endl;
    }
    else if((ngay >= 23 &&  thang == 7) || (ngay <= 22 && thang == 8))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " thuoc cung Su Tu" << endl;
    }
    else if((ngay >= 23 && thang == 8) || (ngay <= 22 &&  thang == 9))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " thuoc cung Xu Nu" << endl;
    }
    else if((ngay >= 23 &&  thang == 9) || (ngay <= 23 &&  thang == 10))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " thuoc cung Thien Binh" << endl;
    }
    
    else if((ngay >= 24 &&  thang == 10) || (ngay <= 21 &&  thang == 11))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " thuoc cung Bo Cap" << endl;
    }
                                                                 
    else if((ngay >= 22 &&  thang == 11) || (ngay <= 21 && thang == 12))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " cung Nhan Ma" << endl;
    }
                                    
    else if((ngay >= 22 &&  thang == 12) || (ngay <= 19 && thang == 1))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " cung Ma Ket" << endl;
    }
                                       
    else if((ngay >= 20 && thang == 1) || (ngay <= 18 &&  thang == 2))
    {
        Xuat_Ngay_Sinh(ngay, thang);
        cout << " cung Bao Binh" << endl;
    }
                    
    else
    {
        Xuat_Ngay_Sinh(ngay, thang); cout << " thuoc cung Song Ngu" << endl;
    }
                                                
    return 0;
}
