<template>
  <div>
    <h2>学生姓名：{{ studentname }}</h2>
  </div>
</template>

<script>
export default {
  name: 'studentVue',
  data() {
    return {
      studentname: '张三'
    }
  }
}
</script>