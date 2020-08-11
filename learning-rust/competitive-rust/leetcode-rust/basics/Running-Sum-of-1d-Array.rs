impl Solution {
    pub fn running_sum(nums: Vec<i32>) -> Vec<i32> {
        let mut sum = 0;
        let mut return_vec = Vec::new();
        for i in 0..nums.len() {
            sum = sum + nums[i];
            return_vec.push(sum);
        }
        return_vec
    }
}