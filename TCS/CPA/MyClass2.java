import java.util.Scanner;

class Beach {

    private int beachId;
    private String beachName;
    private String location;
    private String beachType;
    private int rating;
    private int averageVisitorsPerDay;

    Beach(int bid, String bname, String loc, String btype, int r, int avg) {
        this.beachId = bid;
        this.beachName = bname;
        this.location = loc;
        this.beachType = btype;
        this.rating = r;
        this.averageVisitorsPerDay = avg;

    }


    public int getBeachId () {
        return this.beachId;
    }

    public String getBeachName() {
        return this.beachName;
    }

    public String getLocation() {
        return this.location;
    }

    public String getBeachType() {
        return this.beachType;
    }

    public int getRating() {
        return this.rating;
    }

    public int getAverageVisitorsPerDay() {
        return this.averageVisitorsPerDay;
    }


    public void setBeachId (int n) {
        this.beachId = n;
    }

    public void setBeachName(String n) {
        this.beachName = n;
    }

    public void setLocation(String l) {
        this.location = l;
    }

    public void setBeachType(String bt) {
        this.beachType = bt;
    }

    public void setRating(int r) {
        this.rating = r;
    }
    public void setAverageVistors(int v) {this.averageVisitorsPerDay = v;}


}

public class MyClass2 {
    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);

        int bid;
        String bname;

        String location;
        String type;
        int r;
        int avg;


        Beach[] arr = new Beach[4];
        for(int i = 0; i < 4; i++) {
            bid = sc.nextInt();
            sc.nextLine();
            bname = sc.nextLine();
            location = sc.nextLine();
            type = sc.nextLine();
            r = sc.nextInt();
            avg = sc.nextInt();

            arr[i] = new Beach(bid, bname,location,type,r,avg);
        }
        sc.nextLine();
        String loc1 = sc.nextLine();
        int vis1 = sc.nextInt();

        int ans = findBeachWithLowestRating(arr, loc1, vis1);
        if (ans > 0) {
            System.out.println(ans);
        } else {
            System.out.println("No such Beach");
        }
    }

    //static method
    static int findBeachWithLowestRating( Beach[] arr, String n, int p) {
        int least = Integer.MAX_VALUE;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i].getLocation().equals(n) && arr[i].getAverageVisitorsPerDay() > p && arr[i].getRating() < least) {
                least = arr[i].getRating();
            }
        }
        if (least != Integer.MAX_VALUE) {
            return least;
        } else {return 0;}
    }
}