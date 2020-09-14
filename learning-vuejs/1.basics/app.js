// First instance
new Vue({
    el: '#vue-first-instance',
    data: {
        first_name: 'Uday',
        last_name: 'Yadav',
        website: 'https://dev117uday.github.io/resume_site/',
    },
    methods: {
        greet: function (time) {
            return `Good ${time} ${this.first_name} ${this.last_name}`
        }
    }
})

// second instance
new Vue({
    el: '#vue-second-instance',
    data: {
        counter: 0,
    },
    methods: {
        add: function (t) {
            this.counter += t;
        },
        sub: function (t) {
            this.counter -= t;
        }
    }
})

// third instance
new Vue({
    el: '#vue-third-instance',
    data: {
        name: '',
        age: '',
    }
})

// fourth instance
new Vue({
    el: '#vue-fourth-instance',
    data: {
        counter: 0,
        A: 0,
        B: 0,
    },
    methods: {
        reset: function () {
            this.A = 0
            this.B = 0
            this.counter = 0
            console.clear();
        }
    },
    computed: {
        addToA: function () {
            console.log("Add to A")
            return this.A + this.counter;
        },
        addToB: function () {
            console.log("Add to B")
            return this.B + this.counter;
        }
    }
})

//fifth instance
new Vue({
    el: '#vue-fifth-instance',
    data: {
        show_button: true,
    }

})

// sixth instance
new Vue({
    el: '#vue-sixth-instance',
    data: {
        names: ['Uday', 'Yash', 'Kunal'],
        people: [
            { name: 'Uday', age: 20 },
            { name: 'Yash', age: 33 },
            { name: 'Kunal', age: 44 }
        ]
    }

})