# arm_zydzen_pad01

> <h3>基础信息 </h3>

- vid:0x57A3
- pid:0x0122
- rgb灯光：支持
- 全键无冲：支持
- vial：支持
- 录制宏：不支持
- 编码器：支持
- 键数：11
- 主控：arm主控
- 输入电压：5v
- 屏幕：无
- 拓展：无

> <h3>层</h3>

`[0](数字键层)`RGB: NONE

```markdown
  {  
    4       3       2       1
    0   TO(1)       6       5
        TO(3)           9  
                    7       8
  }
```

`[1](功能键层)`RGB: GREEN

```markdown
{
        F16     F15     F14     F13
        F17     TO(2)   F18     F19
                TO(0)       F20
                        ESC     ENT
}
```

`[2](系统键层)`RGB: BLUE

```markdown
{
        桌面     pscr       粘贴        复制
        静音     TO(0)      撤销        剪切
                 TO(1)            空格
                            切换        任务
}
```

`[3](RGB键层)`RGB: RED

```markdown
{
        降低速度        提高速度        呼吸动画        增加色调
        无              无             静态渐变        降低色调 
                        TO(0)                  关闭灯光
                                       切换灯光         无   
}
```

`ENCODER:`
resolution:2

```markdown
{
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [1] = { ENCODER_CCW_CW(KC_BRIU, KC_BRID) },
    [2] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [3] = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) }
}
```

> <H3>RGB</H3>

`DRIVER:"WS2812"`

`WS2812:bitbang`

`PA7`

`animations`
