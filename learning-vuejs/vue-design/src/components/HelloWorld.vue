<template>
  <div class="hello">
    <b-container>
      <h1 id="heading">Hello World</h1>
      <hr />
      <center>
        <input type="text" placeholder="Search" />
        <button id="search">
          <b-icon-search></b-icon-search>
        </button>
      </center>
    </b-container>
  </div>
</template>

<script>
export default {};
</script>
<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
@import url("https://fonts.googleapis.com/css2?family=Roboto:wght@100;300;400;500;700;900&display=swap");
#heading {
  font-family: "Roboto";
  font-size: 100px;
  text-align: center;
  margin-top: 10vh;
  color: #323130;
}
input {
  width: 60vw;
  height: 5vh;
  color: #323130;
}
#search {
  margin-left: 10px;
  border: 0;
  height: 4.8vh;
  width: 40px;
  background: #106ebe;
  color: white;
  border-radius: 4px;
}
</style>
