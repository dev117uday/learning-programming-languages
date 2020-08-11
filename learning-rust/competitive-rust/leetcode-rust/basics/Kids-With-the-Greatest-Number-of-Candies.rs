impl Solution {
    pub fn kids_with_candies(candies: Vec<i32>, extra_candies: i32) -> Vec<bool> {
        
        let mut return_num : Vec<bool> = Vec::new();
        let mut big = 0;
        
        for i in 0..candies.len(){
            if(candies[i]>=big){
                big = candies[i];
            }
        }
        
        for i in 0..candies.len(){
            if(candies[i]+extra_candies < big){
                return_num.push(false)
            } else {
                return_num.push(true);
            }
        }
               
        
        return_num
    }
}