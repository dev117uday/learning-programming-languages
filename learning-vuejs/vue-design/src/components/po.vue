<template>
	<div>
		<h2>product list one</h2>
		<ul>
			<li v-for="(x,i) in saleProducts" :key="i">{{ x.name }} : {{ x.age }}</li>
		</ul>
		<button @click="reducedPrice(2)">click me</button>
	</div>
</template>

<script>
export default {
	computed: {
		products() {
			return this.$store.state.products;
		},
		saleProducts: function() {
			return this.$store.getters.saleProducts;
		}
	},
	methods: {
		reducedPrice: function(x) {
			this.$store.dispatch("reduceAge", x);
		}
	}
};
</script>

<style lang="scss"></style>
