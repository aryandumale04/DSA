import java.util.Scanner;

class TravelAgencies {

    private int regNo;
    private String agencyName;
    private String packageType;
    private int price;
    private boolean flightFacility;

    TravelAgencies(int regNo, String agencyName, String packageType, int price, boolean flightFacility) {
        this.regNo = regNo;
        this.agencyName = agencyName;
        this.packageType = packageType;
        this.price = price;
        this.flightFacility = flightFacility;
    }

    //declaring the getters 
    public int getRegNo() {
        return this.regNo;
    }

    public String getAgencyName() {
        return this.agencyName;
    }

    public String getPackageType() {
        return this.packageType;
    }

    public int getPrice() {
        return this.price;
    }

    public boolean getFlightFacility() {
        return this.flightFacility;
    }



    //declaring the setters 
    public void setRegNo(int regNo) {
        this.regNo = regNo;
    }

    public void setAgencyName(String agencyName) {
        this.agencyName = agencyName;
    }

    public void setgetPackageType(String packageType) {
        this.packageType = packageType;
    }

    public void setgetPrice(int price) {
         this.price = price;
    }

    public void setFlightFacility(boolean flightFacility) {
        this.flightFacility = flightFacility;
    }




}


public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int regNo;
        String agencyName;
        String packageType;
        int price;
        boolean flightFacility;
        
        TravelAgencies[] arr = new TravelAgencies[4];

        //taking input 
        for (int i = 0; i < arr.length; i++) {
            regNo = sc.nextInt();
            sc.nextLine();
            agencyName = sc.nextLine();
            packageType = sc.nextLine();
            price = sc.nextInt();
            flightFacility = sc.nextBoolean();

            //all values collected construct the TravelAgency Object now 
            arr[i] = new TravelAgencies(regNo, agencyName, packageType, price, flightFacility);
        }

        int regNo1 = sc.nextInt();
        sc.nextLine();
        String package1 = sc.nextLine();



        //check 
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i].getAgencyName());
        }

    }
}