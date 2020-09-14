<template>
	<div id="app">
		<HelloWorld />
		<PO></PO>
		<PT></PT>
	</div>
</template>

<script>
import HelloWorld from "./components/HelloWorld.vue";
import PO from "./components/po.vue";
import PT from "./components/pt.vue";
export default {
	name: "App",
	components: {
		HelloWorld,
		PO,
		PT
	},
	data() {
		return {};
	}
};
</script>

<style lang="scss"></style>
