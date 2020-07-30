struct GameEntity {
    name : String::new(),
    score : u32,
}

struct Score {
    game_status : Vec<GameEntity>,
    num_entries: u32,
    max_entries: std::u32::max_value()
}

impl Score {
    fn length_of_game_vector(&self) -> u32 {
        self.game_status.len();
    }
}

fn main() {



}