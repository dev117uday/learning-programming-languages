<template>
	<div>
		<h2>product list two</h2>
		<ul>
			<li v-for="(x,i) in saleProducts" :key="i">{{ x.name }} : {{ x.age }}</li>
		</ul>
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
	}
};
</script>

<style lang="scss"></style>
