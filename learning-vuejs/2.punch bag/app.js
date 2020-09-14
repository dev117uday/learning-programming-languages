new Vue({
    el: '#vue-app',
    data: {
        score: 100,
    },
    methods: {
        points: function () {
            this.score -= 5
            if (this.score < 0) { this.score = 0 }
        },
        reset: function () {
            this.score = 100
        }
    }
})