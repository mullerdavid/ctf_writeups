(function() {
    "use strict";
    var e = {
            221: function(e, n, t) {
                t.a(e, (async function(e, r) {
                    try {
                        var i = t(4161),
                            o = t(7371),
                            a = t(8214),
                            c = t(4677),
                            s = e([a]);
                        a = (s.then ? (await s)() : s)[0], n.Z = {
                            setup() {
                                const e = (0, c.pm)();
                                return {
                                    toast: e
                                }
                            },
                            data() {
                                return {
                                    devices: []
                                }
                            },
                            async mounted() {
                                const e = (0, a.MN)();
                                this.fdl(e)
                            },
                            methods: {
                                fdl(e) {
                                    const n = o.Z.ServerUrl,
                                        t = {
                                            SerialNumber: e,
                                            uuid: this.generateUUID(),
                                            uid: 1
                                        },
                                        r = {
                                            username: "hereottselfcare",
                                            password: "hereottselfcare"
                                        };
                                    i.Z.get(`${n}/devices`, {
                                        headers: t,
                                        auth: r
                                    }).then((e => {
                                        this.devices = e.data["devices"]
                                    })).catch((e => {
                                        console.error("Error fetching devices:", e), this.toast.error("Error fetching devices")
                                    }))
                                },
                                generateUUID() {
                                    return "xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx".replace(/[xy]/g, (function(e) {
                                        const n = 16 * Math.random() | 0,
                                            t = "x" == e ? n : 3 & n | 8;
                                        return t.toString(16)
                                    }))
                                },
                                idr(e) {
                                    return o.Z.NotAllowedToRemoveDeviceTypes.includes(e)
                                },
                                rd(e) {
                                    console.log(`Removing device with ID ${e}`);
                                    const n = o.Z.ServerUrl,
                                        t = {
                                            SerialNumber: (0, a.MN)(),
                                            uuid: this.generateUUID(),
                                            uid: 1
                                        },
                                        r = {
                                            username: "hereottselfcare",
                                            password: "hereottselfcare"
                                        },
                                        c = {
                                            id: e
                                        };
                                    i.Z.delete(`${n}/device/delete`, {
                                        headers: t,
                                        params: c,
                                        auth: r
                                    }).then((e => {
                                        this.devices = e.data["devices"]
                                    })).catch((e => {
                                        console.error("Error removing device:", e), this.toast.error("Error removing device")
                                    }))
                                }
                            }
                        }, r()
                    } catch (u) {
                        r(u)
                    }
                }))
            },
            4996: function(e, n, t) {
                t.a(e, (async function(e, r) {
                    try {
                        var i = t(4161),
                            o = t(7371),
                            a = t(8214),
                            c = t(4677),
                            s = e([a]);
                        a = (s.then ? (await s)() : s)[0], n.Z = {
                            setup() {
                                const e = (0, c.pm)();
                                return {
                                    toast: e
                                }
                            },
                            data() {
                                return {
                                    qrCode: null,
                                    serial: null
                                }
                            },
                            async mounted() {
                                this.serial = (0, a.MN)(), this.pd(this.serial)
                            },
                            methods: {
                                pd(e) {
                                    const n = o.Z.ServerUrl,
                                        t = {
                                            SerialNumber: e,
                                            uuid: this.generateUUID(),
                                            uid: 1,
                                        },
                                        r = {
                                            username: "hereottselfcare",
                                            password: "hereottselfcare"
                                        };
                                    i.Z.post(`${n}/device/pair`, {}, {
                                        headers: t,
                                        auth: r
                                    }).then((e => {
                                        this.qrCode = "data:image/png;base64," + e.data.qrCode
                                    })).catch((e => {
                                        console.error("Error pairing device:", e), this.toast.error("Error pairing")
                                    }))
                                },
                                generateUUID() {
                                    return "xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx".replace(/[xy]/g, (function(e) {
                                        const n = 16 * Math.random() | 0,
                                            t = "x" == e ? n : 3 & n | 8;
                                        return t.toString(16)
                                    }))
                                }
                            }
                        }, r()
                    } catch (u) {
                        r(u)
                    }
                }))
            },
            7371: function(e, n) {
                n.Z = {
                    ServerUrl: "https://10.10.3.11:48490/selfcare/selfcare-backend",
                    VendorName: "CyberQuest HereOTT",
                    BackgroundUrl: "https://10.10.3.11:48490/selfcare/selfcare-frontend/assets/background.jpg",
                    FontColor: "#FFFFFF",
                    DateLocale: "hu",
                    NotAllowedToRemoveDeviceTypes: ["stb"]
                }
            },
            8214: function(e, n, t) {
                t.a(e, (async function(e, r) {
                    try {
                        t.d(n, {
                            MN: function() {
                                return s
                            },
                            Xx: function() {
                                return u
                            },
                            sq: function() {
                                return d
                            }
                        });
                        var i = t(6475);
                        let e, o;
                        const a = async () => {
                            e = await (0, i.ZP)();
                            const n = localStorage.getItem("serial");
                            n ? o = n : (o = c(), localStorage.setItem("serial", o))
                        }, c = () => {
                            if (!e) throw new Error("DeviceApi is not initialized");
                            return (0, i.Gb)()
                        }, s = () => {
                            if (!o) throw new Error("Serial is not available");
                            return o
                        }, u = (n, t) => {
                            if (!e) throw new Error("DeviceApi is not initialized");
                            return (0, i.Xx)(n, t)
                        }, d = () => {
                            if (!e) throw new Error("DeviceApi is not initialized");
                            return (0, i.f9)()
                        };
                        await a(), r()
                    } catch (o) {
                        r(o)
                    }
                }), 1)
            },
            866: function(e, n, t) {
                t.a(e, (async function(e, n) {
                    try {
                        var r = t(9242),
                            i = t(8725),
                            o = t(108),
                            a = t(4677),
                            c = (t(343), e([o]));
                        o = (c.then ? (await c)() : c)[0];
                        const s = {
                                draggable: !1,
                                showCloseButtonOnHover: !0
                            },
                            u = (0, r.ri)(i.Z);
                        u.use(o.Z), u.use(a.ZP, s), u.mount("#app"), n()
                    } catch (s) {
                        n(s)
                    }
                }))
            },
            108: function(e, n, t) {
                t.a(e, (async function(e, r) {
                    try {
                        var i = t(2483),
                            o = t(5719),
                            a = t(9876),
                            c = e([o, a]);
                        [o, a] = c.then ? (await c)() : c;
                        const s = [{
                                path: "/",
                                component: a.Z
                            }, {
                                path: "/pair-device",
                                component: o.Z
                            }, {
                                path: "/device-list",
                                component: a.Z
                            }],
                            u = (0, i.p7)({
                                history: (0, i.PO)("/selfcare/selfcare-frontend/"),
                                routes: s
                            });
                        n.Z = u, r()
                    } catch (s) {
                        r(s)
                    }
                }))
            },
            6475: function(e, n, t) {
                t.d(n, {
                    Gb: function() {
                        return d
                    },
                    Xx: function() {
                        return p
                    },
                    f9: function() {
                        return w
                    }
                });
                t(1439), t(7585), t(5315), t(6229), t(7330), t(2062);
                let r;
                const i = "undefined" !== typeof TextDecoder ? new TextDecoder("utf-8", {
                    ignoreBOM: !0,
                    fatal: !0
                }) : {
                    decode: () => {
                        throw Error("TextDecoder not available")
                    }
                };
                "undefined" !== typeof TextDecoder && i.decode();
                let o = null;

                function a() {
                    return null !== o && 0 !== o.byteLength || (o = new Uint8Array(r.memory.buffer)), o
                }

                function c(e, n) {
                    return e >>>= 0, i.decode(a().subarray(e, e + n))
                }
                let s = null;

                function u() {
                    return null !== s && 0 !== s.byteLength || (s = new Int32Array(r.memory.buffer)), s
                }

                function d() {
                    let e, n;
                    try {
                        const o = r.__wbindgen_add_to_stack_pointer(-16);
                        r.gen_serial(o);
                        var t = u()[o / 4 + 0],
                            i = u()[o / 4 + 1];
                        return e = t, n = i, c(t, i)
                    } finally {
                        r.__wbindgen_add_to_stack_pointer(16), r.__wbindgen_free(e, n, 1)
                    }
                }
                let f = 0;
                const l = "undefined" !== typeof TextEncoder ? new TextEncoder("utf-8") : {
                        encode: () => {
                            throw Error("TextEncoder not available")
                        }
                    },
                    h = "function" === typeof l.encodeInto ? function(e, n) {
                        return l.encodeInto(e, n)
                    } : function(e, n) {
                        const t = l.encode(e);
                        return n.set(t), {
                            read: e.length,
                            written: t.length
                        }
                    };

                function v(e, n, t) {
                    if (void 0 === t) {
                        const t = l.encode(e),
                            r = n(t.length, 1) >>> 0;
                        return a().subarray(r, r + t.length).set(t), f = t.length, r
                    }
                    let r = e.length,
                        i = n(r, 1) >>> 0;
                    const o = a();
                    let c = 0;
                    for (; c < r; c++) {
                        const n = e.charCodeAt(c);
                        if (n > 127) break;
                        o[i + c] = n
                    }
                    if (c !== r) {
                        0 !== c && (e = e.slice(c)), i = t(i, r, r = c + 3 * e.length, 1) >>> 0;
                        const n = a().subarray(i + c, i + r),
                            o = h(e, n);
                        c += o.written
                    }
                    return f = c, i
                }

                function p(e, n) {
                    let t, i;
                    try {
                        const s = r.__wbindgen_add_to_stack_pointer(-16),
                            d = v(e, r.__wbindgen_malloc, r.__wbindgen_realloc),
                            l = f,
                            h = v(n, r.__wbindgen_malloc, r.__wbindgen_realloc),
                            p = f;
                        r.sign(s, d, l, h, p);
                        var o = u()[s / 4 + 0],
                            a = u()[s / 4 + 1];
                        return t = o, i = a, c(o, a)
                    } finally {
                        r.__wbindgen_add_to_stack_pointer(16), r.__wbindgen_free(t, i, 1)
                    }
                }

                function w() {
                    let e, n;
                    try {
                        const o = r.__wbindgen_add_to_stack_pointer(-16);
                        r.get_uid(o);
                        var t = u()[o / 4 + 0],
                            i = u()[o / 4 + 1];
                        return e = t, n = i, c(t, i)
                    } finally {
                        r.__wbindgen_add_to_stack_pointer(16), r.__wbindgen_free(e, n, 1)
                    }
                }

                function b(e) {
                    return () => {
                        throw new Error(`${e} is not defined`)
                    }
                }
                async function _(e, n) {
                    if ("function" === typeof Response && e instanceof Response) {
                        if ("function" === typeof WebAssembly.instantiateStreaming) try {
                            return await WebAssembly.instantiateStreaming(e, n)
                        } catch (t) {
                            if ("application/wasm" == e.headers.get("Content-Type")) throw t;
                            console.warn("`WebAssembly.instantiateStreaming` failed because your server does not serve wasm with `application/wasm` MIME type. Falling back to `WebAssembly.instantiate` which is slower. Original error:\n", t)
                        }
                        const r = await e.arrayBuffer();
                        return await WebAssembly.instantiate(r, n)
                    } {
                        const t = await WebAssembly.instantiate(e, n);
                        return t instanceof WebAssembly.Instance ? {
                            instance: t,
                            module: e
                        } : t
                    }
                }

                function y() {
                    const e = {
                        wbg: {}
                    };
                    return e.wbg.__wbg_random_5f61cd0d6777a993 = "function" == typeof Math.random ? Math.random : b("Math.random"), e.wbg.__wbindgen_throw = function(e, n) {
                        throw new Error(c(e, n))
                    }, e
                }

                function g(e, n) {}

                function x(e, n) {
                    return r = e.exports, m.__wbindgen_wasm_module = n, s = null, o = null, r
                }
                async function m(e) {
                    if (void 0 !== r) return r;
                    "undefined" === typeof e && (e = new URL(t(2996), t.b));
                    const n = y();
                    ("string" === typeof e || "function" === typeof Request && e instanceof Request || "function" === typeof URL && e instanceof URL) && (e = fetch(e)), g(n);
                    const {
                        instance: i,
                        module: o
                    } = await _(await e, n);
                    return x(i, o)
                }
                n.ZP = m
            },
            8725: function(e, n, t) {
                t.d(n, {
                    Z: function() {
                        return b
                    }
                });
                var r = t(3396);

                function i(e, n, t, i, o, a) {
                    const c = (0, r.up)("HomePage");
                    return (0, r.wg)(), (0, r.j4)(c)
                }
                var o = t(7139);
                const a = {
                        class: "app-container"
                    },
                    c = {
                        class: "sidebar"
                    },
                    s = {
                        class: "sidebar-item-list"
                    },
                    u = {
                        class: "content"
                    };

                function d(e, n, t, i, d, f) {
                    const l = (0, r.up)("router-link"),
                        h = (0, r.up)("router-view");
                    return (0, r.wg)(), (0, r.iD)("div", a, [(0, r._)("div", c, [(0, r._)("div", s, [((0, r.wg)(!0), (0, r.iD)(r.HY, null, (0, r.Ko)(d.sidebarLinks, ((e, n) => ((0, r.wg)(), (0, r.j4)(l, {
                        to: e.path,
                        class: (0, o.C_)(["sidebar-item", {
                            active: f.isActive(e.path),
                            selected: n === d.activeIndex
                        }]),
                        key: e.path
                    }, {
                        default: (0, r.w5)((() => [(0, r.Uk)((0, o.zw)(e.label), 1)])),
                        _: 2
                    }, 1032, ["to", "class"])))), 128))])]), (0, r._)("div", u, [(0, r.Wm)(h)])])
                }
                t(7658);
                var f = {
                        data() {
                            return {
                                activeIndex: 0,
                                sidebarLinks: [{
                                    path: "/device-list",
                                    label: "Device list"
                                }, {
                                    path: "/pair-device",
                                    label: "Pair a Device"
                                }]
                            }
                        },
                        methods: {
                            isActive(e) {
                                return this.$route.path === e
                            },
                            handleArrowUp() {
                                this.activeIndex = Math.max(this.activeIndex - 1, 0), this.navigateToLink(this.activeIndex)
                            },
                            handleArrowDown() {
                                this.activeIndex = Math.min(this.activeIndex + 1, this.sidebarLinks.length - 1), this.navigateToLink(this.activeIndex)
                            },
                            navigateToLink(e) {
                                this.$router.push(this.sidebarLinks[e].path)
                            },
                            handleKeyDown(e) {
                                switch (e.key) {
                                    case "ArrowUp":
                                        this.handleArrowUp();
                                        break;
                                    case "ArrowDown":
                                        this.handleArrowDown();
                                        break;
                                    default:
                                        break
                                }
                            }
                        },
                        mounted() {
                            window.addEventListener("keydown", this.handleKeyDown)
                        },
                        beforeUnmount() {
                            window.removeEventListener("keydown", this.handleKeyDown)
                        }
                    },
                    l = t(89);
                const h = (0, l.Z)(f, [
                    ["render", d],
                    ["__scopeId", "data-v-37a6d856"]
                ]);
                var v = h,
                    p = {
                        name: "App",
                        components: {
                            HomePage: v
                        }
                    };
                const w = (0, l.Z)(p, [
                    ["render", i]
                ]);
                var b = w
            },
            9876: function(e, n, t) {
                t.a(e, (async function(e, r) {
                    try {
                        var i = t(2362),
                            o = t(163),
                            a = (t(6735), t(89)),
                            c = e([o]);
                        o = (c.then ? (await c)() : c)[0];
                        const s = (0, a.Z)(o.Z, [
                            ["render", i.s],
                            ["__scopeId", "data-v-6f82176f"]
                        ]);
                        n.Z = s, r()
                    } catch (s) {
                        r(s)
                    }
                }))
            },
            5719: function(e, n, t) {
                t.a(e, (async function(e, r) {
                    try {
                        var i = t(2193),
                            o = t(758),
                            a = (t(7038), t(89)),
                            c = e([o]);
                        o = (c.then ? (await c)() : c)[0];
                        const s = (0, a.Z)(o.Z, [
                            ["render", i.s],
                            ["__scopeId", "data-v-087d5e9e"]
                        ]);
                        n.Z = s, r()
                    } catch (s) {
                        r(s)
                    }
                }))
            },
            6735: function() {},
            7038: function() {},
            163: function(e, n, t) {
                t.a(e, (async function(e, r) {
                    try {
                        t.d(n, {
                            Z: function() {
                                return i.Z
                            }
                        });
                        var i = t(221),
                            o = e([i]);
                        i = (o.then ? (await o)() : o)[0], r()
                    } catch (a) {
                        r(a)
                    }
                }))
            },
            758: function(e, n, t) {
                t.a(e, (async function(e, r) {
                    try {
                        t.d(n, {
                            Z: function() {
                                return i.Z
                            }
                        });
                        var i = t(4996),
                            o = e([i]);
                        i = (o.then ? (await o)() : o)[0], r()
                    } catch (a) {
                        r(a)
                    }
                }))
            },
            2362: function(e, n, t) {
                t.d(n, {
                    s: function() {
                        return h
                    }
                });
                var r = t(3396),
                    i = t(7139);
                const o = e => ((0, r.dD)("data-v-6f82176f"), e = e(), (0, r.Cn)(), e),
                    a = {
                        id: "list",
                        class: "device-list-container"
                    },
                    c = o((() => (0, r._)("h2", null, "Device List", -1))),
                    s = {
                        class: "device-list"
                    },
                    u = {
                        class: "device-info"
                    },
                    d = {
                        class: "device-name"
                    },
                    f = {
                        class: "device-type"
                    },
                    l = ["onClick", "disabled"];

                function h(e, n, t, o, h, v) {
                    return (0, r.wg)(), (0, r.iD)("div", a, [c, (0, r._)("ul", s, [((0, r.wg)(!0), (0, r.iD)(r.HY, null, (0, r.Ko)(h.devices, (e => ((0, r.wg)(), (0, r.iD)("li", {
                        key: e.id,
                        class: "device-item"
                    }, [(0, r._)("div", u, [(0, r._)("span", d, (0, i.zw)(e.name), 1), (0, r._)("span", f, "Type: " + (0, i.zw)(e.type), 1)]), (0, r._)("button", {
                        onClick: n => v.rd(e.id),
                        disabled: v.idr(e.type),
                        class: "remove-button"
                    }, "Remove", 8, l)])))), 128))])])
                }
            },
            2193: function(e, n, t) {
                t.d(n, {
                    s: function() {
                        return u
                    }
                });
                var r = t(3396);
                const i = e => ((0, r.dD)("data-v-087d5e9e"), e = e(), (0, r.Cn)(), e),
                    o = {
                        id: "pair",
                        class: "pair-device-container"
                    },
                    a = i((() => (0, r._)("h2", null, "Pair Device", -1))),
                    c = {
                        key: 0,
                        class: "qr-code-container"
                    },
                    s = ["src"];

                function u(e, n, t, i, u, d) {
                    return (0, r.wg)(), (0, r.iD)("div", o, [a, u.qrCode ? ((0, r.wg)(), (0, r.iD)("div", c, [(0, r._)("img", {
                        src: u.qrCode,
                        onClick: n[0] || (n[0] = () => d.pd(u.serial)),
                        alt: "QR Code",
                        class: "qr-code"
                    }, null, 8, s)])) : (0, r.kq)("", !0)])
                }
            },
            2996: function(e, n, t) {
                e.exports = t.p + "5c56ebcf9201bf3d.wasm"
            }
        },
        n = {};

    function t(r) {
        var i = n[r];
        if (void 0 !== i) return i.exports;
        var o = n[r] = {
            exports: {}
        };
        return e[r].call(o.exports, o, o.exports, t), o.exports
    }
    t.m = e,
        function() {
            var e = "function" === typeof Symbol ? Symbol("webpack queues") : "__webpack_queues__",
                n = "function" === typeof Symbol ? Symbol("webpack exports") : "__webpack_exports__",
                r = "function" === typeof Symbol ? Symbol("webpack error") : "__webpack_error__",
                i = function(e) {
                    e && e.d < 1 && (e.d = 1, e.forEach((function(e) {
                        e.r--
                    })), e.forEach((function(e) {
                        e.r-- ? e.r++ : e()
                    })))
                },
                o = function(t) {
                    return t.map((function(t) {
                        if (null !== t && "object" === typeof t) {
                            if (t[e]) return t;
                            if (t.then) {
                                var o = [];
                                o.d = 0, t.then((function(e) {
                                    a[n] = e, i(o)
                                }), (function(e) {
                                    a[r] = e, i(o)
                                }));
                                var a = {};
                                return a[e] = function(e) {
                                    e(o)
                                }, a
                            }
                        }
                        var c = {};
                        return c[e] = function() {}, c[n] = t, c
                    }))
                };
            t.a = function(t, a, c) {
                var s;
                c && ((s = []).d = -1);
                var u, d, f, l = new Set,
                    h = t.exports,
                    v = new Promise((function(e, n) {
                        f = n, d = e
                    }));
                v[n] = h, v[e] = function(e) {
                    s && e(s), l.forEach(e), v["catch"]((function() {}))
                }, t.exports = v, a((function(t) {
                    var i;
                    u = o(t);
                    var a = function() {
                            return u.map((function(e) {
                                if (e[r]) throw e[r];
                                return e[n]
                            }))
                        },
                        c = new Promise((function(n) {
                            i = function() {
                                n(a)
                            }, i.r = 0;
                            var t = function(e) {
                                e !== s && !l.has(e) && (l.add(e), e && !e.d && (i.r++, e.push(i)))
                            };
                            u.map((function(n) {
                                n[e](t)
                            }))
                        }));
                    return i.r ? c : a()
                }), (function(e) {
                    e ? f(v[r] = e) : d(h), i(s)
                })), s && s.d < 0 && (s.d = 0)
            }
        }(),
        function() {
            var e = [];
            t.O = function(n, r, i, o) {
                if (!r) {
                    var a = 1 / 0;
                    for (d = 0; d < e.length; d++) {
                        r = e[d][0], i = e[d][1], o = e[d][2];
                        for (var c = !0, s = 0; s < r.length; s++)(!1 & o || a >= o) && Object.keys(t.O).every((function(e) {
                            return t.O[e](r[s])
                        })) ? r.splice(s--, 1) : (c = !1, o < a && (a = o));
                        if (c) {
                            e.splice(d--, 1);
                            var u = i();
                            void 0 !== u && (n = u)
                        }
                    }
                    return n
                }
                o = o || 0;
                for (var d = e.length; d > 0 && e[d - 1][2] > o; d--) e[d] = e[d - 1];
                e[d] = [r, i, o]
            }
        }(),
        function() {
            t.n = function(e) {
                var n = e && e.__esModule ? function() {
                    return e["default"]
                } : function() {
                    return e
                };
                return t.d(n, {
                    a: n
                }), n
            }
        }(),
        function() {
            t.d = function(e, n) {
                for (var r in n) t.o(n, r) && !t.o(e, r) && Object.defineProperty(e, r, {
                    enumerable: !0,
                    get: n[r]
                })
            }
        }(),
        function() {
            t.g = function() {
                if ("object" === typeof globalThis) return globalThis;
                try {
                    return this || new Function("return this")()
                } catch (e) {
                    if ("object" === typeof window) return window
                }
            }()
        }(),
        function() {
            t.o = function(e, n) {
                return Object.prototype.hasOwnProperty.call(e, n)
            }
        }(),
        function() {
            t.p = "/selfcare/selfcare-frontend/"
        }(),
        function() {
            t.b = document.baseURI || self.location.href;
            var e = {
                143: 0
            };
            t.O.j = function(n) {
                return 0 === e[n]
            };
            var n = function(n, r) {
                    var i, o, a = r[0],
                        c = r[1],
                        s = r[2],
                        u = 0;
                    if (a.some((function(n) {
                            return 0 !== e[n]
                        }))) {
                        for (i in c) t.o(c, i) && (t.m[i] = c[i]);
                        if (s) var d = s(t)
                    }
                    for (n && n(r); u < a.length; u++) o = a[u], t.o(e, o) && e[o] && e[o][0](), e[o] = 0;
                    return t.O(d)
                },
                r = self["webpackChunkselfcare_frontend"] = self["webpackChunkselfcare_frontend"] || [];
            r.forEach(n.bind(null, 0)), r.push = n.bind(null, r.push.bind(r))
        }();
    var r = t.O(void 0, [998], (function() {
        return t(866)
    }));
    r = t.O(r)
})();