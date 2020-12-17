console.log("Hello World")

const app = Vue.createApp({
    data() {
        return {
            msg: "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut ",
            age: 30,
            name: "",
            inputName: "",
            ageInfo: false,
            ageMsg: "",
            books: [
                { name: "Uday yadav" },
                { name: "uday yadav" },
                { name: "uday yadav" },
            ],
            friends: [
                { name: "dump", isFriend: true },
                { name: "dump", isFriend: false },
                { name: "dump", isFriend: true },
            ],
            url: "https://uday-yadav.web.app/"
        }
    },
    methods: {
        increaseAge() {
            this.age++
        },
        decreaseAge() {
            this.age--
        },
        sendName() {
            this.name = this.inputName
        },
        funcAgeMsg() {
            if (this.age >= 30) {
                this.ageMsg = "mature"
                this.ageInfo = true
            } else {
                this.ageInfo = false
            }
        },
    },
    computed: {
        friendsComp() {
            return this.friends.filter((friend) =>  friend.isFriend )
        }
    }
})

app.mount('#app')