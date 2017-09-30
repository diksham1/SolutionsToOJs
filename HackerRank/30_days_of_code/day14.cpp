    // Add your code here

    Difference(vector<int> arr){
        this->elements = arr;
    }

    void computeDifference(){
        maximumDifference = abs(elements[0] - elements[1]);
        for(int i = 0; i<elements.size(); i++){
            for(int j = i+1; j<elements.size(); j++){
                if(abs(elements[i] - elements[j]) > maximumDifference)
                    maximumDifference = abs(elements[i] - elements[j]);
            }
        }
    }
