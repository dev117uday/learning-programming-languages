Vue.component('greeting', {
    template: '<p>This is dumies component from {{ name }} <button class="btn" v-on:click="change">Click me</button> </p> ',
    data: function () {
        return {
            name: 'Uday'
        }
    },
    methods: {
        change: function () {
            this.name = 'Mario'
        }
    }
})

var first = new Vue({
    el: '#vue-component-first',
    data: {
        title: 'App one'
    }
})

var second = new Vue({
    el: '#vue-component-second',
    data: {
        title: 'Referencing with $refs'
    },
    methods: {
        doStuff: function () {
            console.log(this.$refs.input.value)
        }
    }
})

