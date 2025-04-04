int size = arr.size();
        
        int largest = -1;
        for(int i=0; i<size; i++) {
            if(arr[i] > largest)
                largest = arr[i];
        }
        
        int secLar = -1;
        int diff = INT_MAX;
        for(int i=0 ; i<size; i++) {
            if(arr[i] == largest)
                continue;
            int currDiff = largest - arr[i];
            if(currDiff < diff) {
                diff = currDiff;
                secLar = arr[i];
            }
        }
        return secLar;