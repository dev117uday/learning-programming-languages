import Vue from "vue";
import Vuex from "vuex";
Vue.use(Vuex)

export const store = new Vuex.Store({
    state: {
        products: [
            { name: "uday", age: 12 },
            { name: "qwerty", age: 13 }
        ]
    },
    getters: {
        saleProducts: state => {
            var saleProducts = state.products.map(product => {
                return {
                    name: "++" + product.name + "++",
                    age: product.age * 2
                };
            });
            return saleProducts;
        }
    },
    mutations: {
        reduceAge: (state, x) => {
            state.products.forEach(product => {
                product.age += x
            })
        }
    },
    actions: {
        reduceAge: (context, x) => {
            setTimeout(() => {
                context.commit("reduceAge", x)
            }, 1000)
        }
    }

})