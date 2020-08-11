impl Solution {
    pub fn shuffle(nums: Vec<i32>, n: i32) -> Vec<i32> {
        let mut xnum = Vec::new();
        let half = n;
        for i in 0..nums.len()/2 {
            let mut first = nums[i as usize];
            xnum.push(first);
            let mut second = half+(i as i32) ;
            xnum.push(nums[second as usize]);
        }
        xnum
    }
}