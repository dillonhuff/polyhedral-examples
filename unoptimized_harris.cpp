#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: harris_compute.h
#include "harris_compute.h"

#include "hw_classes.h"

struct cim_output_stencil_hcompute_cim_output_stencil_40_to_cim_output_stencil_hcompute_hw_output_stencil_51_cache {
	// RAM Box: {[0, 57], [0, 57]}
	// Capacity: 3364
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3364];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_output_stencil_hcompute_cim_output_stencil_40_to_cim_output_stencil_hcompute_hw_output_stencil_51_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3364);
  }
  ~cim_output_stencil_hcompute_cim_output_stencil_40_to_cim_output_stencil_hcompute_hw_output_stencil_51_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3364)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3364);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3364)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3364);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_output_stencil_cache {
  // # of banks: 1
  cim_output_stencil_hcompute_cim_output_stencil_40_to_cim_output_stencil_hcompute_hw_output_stencil_51_cache cim_output_stencil_hcompute_cim_output_stencil_40_to_cim_output_stencil_hcompute_hw_output_stencil_51;
};



inline void cim_output_stencil_hcompute_cim_output_stencil_40_write(hw_uint<16>& cim_output_stencil_hcompute_cim_output_stencil_40, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  cim_output_stencil.cim_output_stencil_hcompute_cim_output_stencil_40_to_cim_output_stencil_hcompute_hw_output_stencil_51.write(cim_output_stencil_hcompute_cim_output_stencil_40, (cim_output_s0_x - 0) * 1 + (cim_output_s0_y - 0) * 58);
}

inline hw_uint<16> cim_output_stencil_hcompute_hw_output_stencil_51_select(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_output_stencil_hcompute_hw_output_stencil_51 read pattern: { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> cim_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
  auto value_cim_output_stencil_hcompute_cim_output_stencil_40 = cim_output_stencil.cim_output_stencil_hcompute_cim_output_stencil_40_to_cim_output_stencil_hcompute_hw_output_stencil_51.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 58);
  return value_cim_output_stencil_hcompute_cim_output_stencil_40;
  return 0;
}

// # of bundles = 2
// hcompute_cim_output_stencil_write
//	cim_output_stencil_hcompute_cim_output_stencil_40
inline void cim_output_stencil_hcompute_cim_output_stencil_write_bundle_write(hw_uint<16>& hcompute_cim_output_stencil_write, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
	hw_uint<16> cim_output_stencil_hcompute_cim_output_stencil_40_res = hcompute_cim_output_stencil_write.extract<0, 15>();
	cim_output_stencil_hcompute_cim_output_stencil_40_write(cim_output_stencil_hcompute_cim_output_stencil_40_res, cim_output_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
}

// hcompute_hw_output_stencil_read
//	cim_output_stencil_hcompute_hw_output_stencil_51
inline hw_uint<16> cim_output_stencil_hcompute_hw_output_stencil_read_bundle_read(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // cim_output_stencil_hcompute_hw_output_stencil_51

	hw_uint<16> result;
	hw_uint<16> cim_output_stencil_hcompute_hw_output_stencil_51_res = cim_output_stencil_hcompute_hw_output_stencil_51_select(cim_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, cim_output_stencil_hcompute_hw_output_stencil_51_res);
	return result;
}

#include "hw_classes.h"

struct cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_41_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_41_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_41_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_42_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_43_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_43_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_43_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_44_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_44_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_44_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_45_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_45_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_45_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_46_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_46_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_46_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_47_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_47_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_47_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_48_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_48_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_48_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_49_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_49_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_49_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_cache {
  // # of banks: 9
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_41_cache cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_41;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_42_cache cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_42;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_43_cache cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_43;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_44_cache cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_44;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_45_cache cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_45;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_46_cache cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_46;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_47_cache cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_47;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_48_cache cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_48;
  cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_49_cache cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_49;
};



inline void cim_stencil_hcompute_cim_stencil_36_write(hw_uint<16>& cim_stencil_hcompute_cim_stencil_36, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_41.write(cim_stencil_hcompute_cim_stencil_36, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_42.write(cim_stencil_hcompute_cim_stencil_36, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_43.write(cim_stencil_hcompute_cim_stencil_36, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_44.write(cim_stencil_hcompute_cim_stencil_36, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_45.write(cim_stencil_hcompute_cim_stencil_36, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_46.write(cim_stencil_hcompute_cim_stencil_36, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_47.write(cim_stencil_hcompute_cim_stencil_36, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_48.write(cim_stencil_hcompute_cim_stencil_36, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_49.write(cim_stencil_hcompute_cim_stencil_36, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_41_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_41 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_x, -1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_36 = cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_41.read(/*ram type address*/ (-1 + cim_output_s0_x - -1) * 1 + (-1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_36;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_42_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_42 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_x, cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_36 = cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_42.read(/*ram type address*/ (cim_output_s0_x - -1) * 1 + (cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_36;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_43_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_43 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_x, -1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_36 = cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_43.read(/*ram type address*/ (cim_output_s0_x - -1) * 1 + (-1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_36;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_44_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_44 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_x, -1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_36 = cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_44.read(/*ram type address*/ (1 + cim_output_s0_x - -1) * 1 + (-1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_36;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_45_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_45 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_x, cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_36 = cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_45.read(/*ram type address*/ (-1 + cim_output_s0_x - -1) * 1 + (cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_36;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_46_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_46 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_x, cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_36 = cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_46.read(/*ram type address*/ (1 + cim_output_s0_x - -1) * 1 + (cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_36;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_47_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_47 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_x, 1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_36 = cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_47.read(/*ram type address*/ (-1 + cim_output_s0_x - -1) * 1 + (1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_36;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_48_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_48 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_x, 1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_36 = cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_48.read(/*ram type address*/ (cim_output_s0_x - -1) * 1 + (1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_36;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_49_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_49 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_x, 1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_36 = cim_stencil.cim_stencil_hcompute_cim_stencil_36_to_cim_stencil_hcompute_cim_output_stencil_49.read(/*ram type address*/ (1 + cim_output_s0_x - -1) * 1 + (1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_36;
  return 0;
}

// # of bundles = 2
// hcompute_cim_output_stencil_read
//	cim_stencil_hcompute_cim_output_stencil_41
//	cim_stencil_hcompute_cim_output_stencil_42
//	cim_stencil_hcompute_cim_output_stencil_43
//	cim_stencil_hcompute_cim_output_stencil_44
//	cim_stencil_hcompute_cim_output_stencil_45
//	cim_stencil_hcompute_cim_output_stencil_46
//	cim_stencil_hcompute_cim_output_stencil_47
//	cim_stencil_hcompute_cim_output_stencil_48
//	cim_stencil_hcompute_cim_output_stencil_49
inline hw_uint<144> cim_stencil_hcompute_cim_output_stencil_read_bundle_read(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  // # of ports in bundle: 9
    // cim_stencil_hcompute_cim_output_stencil_41
    // cim_stencil_hcompute_cim_output_stencil_42
    // cim_stencil_hcompute_cim_output_stencil_43
    // cim_stencil_hcompute_cim_output_stencil_44
    // cim_stencil_hcompute_cim_output_stencil_45
    // cim_stencil_hcompute_cim_output_stencil_46
    // cim_stencil_hcompute_cim_output_stencil_47
    // cim_stencil_hcompute_cim_output_stencil_48
    // cim_stencil_hcompute_cim_output_stencil_49

	hw_uint<144> result;
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_41_res = cim_stencil_hcompute_cim_output_stencil_41_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<0, 144>(result, cim_stencil_hcompute_cim_output_stencil_41_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_42_res = cim_stencil_hcompute_cim_output_stencil_42_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<16, 144>(result, cim_stencil_hcompute_cim_output_stencil_42_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_43_res = cim_stencil_hcompute_cim_output_stencil_43_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<32, 144>(result, cim_stencil_hcompute_cim_output_stencil_43_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_44_res = cim_stencil_hcompute_cim_output_stencil_44_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<48, 144>(result, cim_stencil_hcompute_cim_output_stencil_44_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_45_res = cim_stencil_hcompute_cim_output_stencil_45_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<64, 144>(result, cim_stencil_hcompute_cim_output_stencil_45_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_46_res = cim_stencil_hcompute_cim_output_stencil_46_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<80, 144>(result, cim_stencil_hcompute_cim_output_stencil_46_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_47_res = cim_stencil_hcompute_cim_output_stencil_47_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<96, 144>(result, cim_stencil_hcompute_cim_output_stencil_47_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_48_res = cim_stencil_hcompute_cim_output_stencil_48_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<112, 144>(result, cim_stencil_hcompute_cim_output_stencil_48_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_49_res = cim_stencil_hcompute_cim_output_stencil_49_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<128, 144>(result, cim_stencil_hcompute_cim_output_stencil_49_res);
	return result;
}

// hcompute_cim_stencil_write
//	cim_stencil_hcompute_cim_stencil_36
inline void cim_stencil_hcompute_cim_stencil_write_bundle_write(hw_uint<16>& hcompute_cim_stencil_write, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
	hw_uint<16> cim_stencil_hcompute_cim_stencil_36_res = hcompute_cim_stencil_write.extract<0, 15>();
	cim_stencil_hcompute_cim_stencil_36_write(cim_stencil_hcompute_cim_stencil_36_res, cim_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxx_stencil_53_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxx_stencil_53_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxx_stencil_53_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxy_stencil_8_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxy_stencil_8_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxy_stencil_8_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct grad_x_stencil_cache {
  // # of banks: 2
  grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxx_stencil_53_cache grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxx_stencil_53;
  grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxy_stencil_8_cache grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxy_stencil_8;
};



inline void grad_x_stencil_hcompute_grad_x_stencil_54_write(hw_uint<16>& grad_x_stencil_hcompute_grad_x_stencil_54, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  grad_x_stencil.grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxx_stencil_53.write(grad_x_stencil_hcompute_grad_x_stencil_54, (grad_x_s0_x - -2) * 1 + (grad_x_s0_y - -2) * 64);
  grad_x_stencil.grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxy_stencil_8.write(grad_x_stencil_hcompute_grad_x_stencil_54, (grad_x_s0_x - -2) * 1 + (grad_x_s0_y - -2) * 64);
}

inline hw_uint<16> grad_x_stencil_hcompute_lxx_stencil_53_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_stencil_hcompute_lxx_stencil_53 read pattern: { hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> grad_x_stencil[lxx_s0_x, lxx_s0_y] : -2 <= lxx_s0_y <= 61 and -2 <= lxx_s0_x <= 61 }
  auto value_grad_x_stencil_hcompute_grad_x_stencil_54 = grad_x_stencil.grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxx_stencil_53.read(/*ram type address*/ (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  return value_grad_x_stencil_hcompute_grad_x_stencil_54;
  return 0;
}

inline hw_uint<16> grad_x_stencil_hcompute_lxy_stencil_8_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_stencil_hcompute_lxy_stencil_8 read pattern: { hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_x_stencil[lxy_s0_x, lxy_s0_y] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61 }
  auto value_grad_x_stencil_hcompute_grad_x_stencil_54 = grad_x_stencil.grad_x_stencil_hcompute_grad_x_stencil_54_to_grad_x_stencil_hcompute_lxy_stencil_8.read(/*ram type address*/ (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  return value_grad_x_stencil_hcompute_grad_x_stencil_54;
  return 0;
}

// # of bundles = 3
// hcompute_grad_x_stencil_write
//	grad_x_stencil_hcompute_grad_x_stencil_54
inline void grad_x_stencil_hcompute_grad_x_stencil_write_bundle_write(hw_uint<16>& hcompute_grad_x_stencil_write, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
	hw_uint<16> grad_x_stencil_hcompute_grad_x_stencil_54_res = hcompute_grad_x_stencil_write.extract<0, 15>();
	grad_x_stencil_hcompute_grad_x_stencil_54_write(grad_x_stencil_hcompute_grad_x_stencil_54_res, grad_x_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
}

// hcompute_lxx_stencil_read
//	grad_x_stencil_hcompute_lxx_stencil_53
inline hw_uint<16> grad_x_stencil_hcompute_lxx_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_hcompute_lxx_stencil_53

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_hcompute_lxx_stencil_53_res = grad_x_stencil_hcompute_lxx_stencil_53_select(grad_x_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_hcompute_lxx_stencil_53_res);
	return result;
}

// hcompute_lxy_stencil_read
//	grad_x_stencil_hcompute_lxy_stencil_8
inline hw_uint<16> grad_x_stencil_hcompute_lxy_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_hcompute_lxy_stencil_8

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_hcompute_lxy_stencil_8_res = grad_x_stencil_hcompute_lxy_stencil_8_select(grad_x_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_hcompute_lxy_stencil_8_res);
	return result;
}

#include "hw_classes.h"

struct grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lxy_stencil_9_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lxy_stencil_9_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lxy_stencil_9_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lyy_stencil_11_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lyy_stencil_11_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lyy_stencil_11_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct grad_y_stencil_cache {
  // # of banks: 2
  grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lxy_stencil_9_cache grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lxy_stencil_9;
  grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lyy_stencil_11_cache grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lyy_stencil_11;
};



inline void grad_y_stencil_hcompute_grad_y_stencil_0_write(hw_uint<16>& grad_y_stencil_hcompute_grad_y_stencil_0, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  grad_y_stencil.grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lxy_stencil_9.write(grad_y_stencil_hcompute_grad_y_stencil_0, (grad_y_s0_x - -2) * 1 + (grad_y_s0_y - -2) * 64);
  grad_y_stencil.grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lyy_stencil_11.write(grad_y_stencil_hcompute_grad_y_stencil_0, (grad_y_s0_x - -2) * 1 + (grad_y_s0_y - -2) * 64);
}

inline hw_uint<16> grad_y_stencil_hcompute_lxy_stencil_9_select(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_stencil_hcompute_lxy_stencil_9 read pattern: { hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_y_stencil[lxy_s0_x, lxy_s0_y] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61 }
  auto value_grad_y_stencil_hcompute_grad_y_stencil_0 = grad_y_stencil.grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lxy_stencil_9.read(/*ram type address*/ (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  return value_grad_y_stencil_hcompute_grad_y_stencil_0;
  return 0;
}

inline hw_uint<16> grad_y_stencil_hcompute_lyy_stencil_11_select(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_stencil_hcompute_lyy_stencil_11 read pattern: { hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> grad_y_stencil[lyy_s0_x, lyy_s0_y] : -2 <= lyy_s0_y <= 61 and -2 <= lyy_s0_x <= 61 }
  auto value_grad_y_stencil_hcompute_grad_y_stencil_0 = grad_y_stencil.grad_y_stencil_hcompute_grad_y_stencil_0_to_grad_y_stencil_hcompute_lyy_stencil_11.read(/*ram type address*/ (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  return value_grad_y_stencil_hcompute_grad_y_stencil_0;
  return 0;
}

// # of bundles = 3
// hcompute_grad_y_stencil_write
//	grad_y_stencil_hcompute_grad_y_stencil_0
inline void grad_y_stencil_hcompute_grad_y_stencil_write_bundle_write(hw_uint<16>& hcompute_grad_y_stencil_write, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
	hw_uint<16> grad_y_stencil_hcompute_grad_y_stencil_0_res = hcompute_grad_y_stencil_write.extract<0, 15>();
	grad_y_stencil_hcompute_grad_y_stencil_0_write(grad_y_stencil_hcompute_grad_y_stencil_0_res, grad_y_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
}

// hcompute_lxy_stencil_read
//	grad_y_stencil_hcompute_lxy_stencil_9
inline hw_uint<16> grad_y_stencil_hcompute_lxy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_hcompute_lxy_stencil_9

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_hcompute_lxy_stencil_9_res = grad_y_stencil_hcompute_lxy_stencil_9_select(grad_y_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_hcompute_lxy_stencil_9_res);
	return result;
}

// hcompute_lyy_stencil_read
//	grad_y_stencil_hcompute_lyy_stencil_11
inline hw_uint<16> grad_y_stencil_hcompute_lyy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_hcompute_lyy_stencil_11

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_hcompute_lyy_stencil_11_res = grad_y_stencil_hcompute_lyy_stencil_11_select(grad_y_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_hcompute_lyy_stencil_11_res);
	return result;
}

#include "hw_classes.h"

struct lgxx_stencil_hcompute_lgxx_stencil_1_64_to_lgxx_stencil_hcompute_cim_stencil_37_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgxx_stencil_hcompute_lgxx_stencil_1_64_to_lgxx_stencil_hcompute_cim_stencil_37_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgxx_stencil_hcompute_lgxx_stencil_1_64_to_lgxx_stencil_hcompute_cim_stencil_37_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lgxx_stencil_hcompute_lgxx_stencil_61_to_lgxx_stencil_hcompute_lgxx_stencil_1_65_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgxx_stencil_hcompute_lgxx_stencil_61_to_lgxx_stencil_hcompute_lgxx_stencil_1_65_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgxx_stencil_hcompute_lgxx_stencil_61_to_lgxx_stencil_hcompute_lgxx_stencil_1_65_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lgxx_stencil_cache {
  // # of banks: 2
  lgxx_stencil_hcompute_lgxx_stencil_1_64_to_lgxx_stencil_hcompute_cim_stencil_37_cache lgxx_stencil_hcompute_lgxx_stencil_1_64_to_lgxx_stencil_hcompute_cim_stencil_37;
  lgxx_stencil_hcompute_lgxx_stencil_61_to_lgxx_stencil_hcompute_lgxx_stencil_1_65_cache lgxx_stencil_hcompute_lgxx_stencil_61_to_lgxx_stencil_hcompute_lgxx_stencil_1_65;
};



inline void lgxx_stencil_hcompute_lgxx_stencil_1_64_write(hw_uint<16>& lgxx_stencil_hcompute_lgxx_stencil_1_64, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_hcompute_lgxx_stencil_1_64_to_lgxx_stencil_hcompute_cim_stencil_37.write(lgxx_stencil_hcompute_lgxx_stencil_1_64, (lgxx_s1_x - -1) * 1 + (lgxx_s1_y - -1) * 61);
}

inline void lgxx_stencil_hcompute_lgxx_stencil_61_write(hw_uint<16>& lgxx_stencil_hcompute_lgxx_stencil_61, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_hcompute_lgxx_stencil_61_to_lgxx_stencil_hcompute_lgxx_stencil_1_65.write(lgxx_stencil_hcompute_lgxx_stencil_61, (lgxx_s0_x - -1) * 1 + (lgxx_s0_y - -1) * 61);
}

inline hw_uint<16> lgxx_stencil_hcompute_cim_stencil_37_select(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_stencil_hcompute_cim_stencil_37 read pattern: { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxx_stencil[cim_s0_x, cim_s0_y] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
  auto value_lgxx_stencil_hcompute_lgxx_stencil_1_64 = lgxx_stencil.lgxx_stencil_hcompute_lgxx_stencil_1_64_to_lgxx_stencil_hcompute_cim_stencil_37.read(/*ram type address*/ (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  return value_lgxx_stencil_hcompute_lgxx_stencil_1_64;
  return 0;
}

inline hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_65_select(lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_stencil_hcompute_lgxx_stencil_1_65 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lgxx_stencil[lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lgxx_stencil_hcompute_lgxx_stencil_61 = lgxx_stencil.lgxx_stencil_hcompute_lgxx_stencil_61_to_lgxx_stencil_hcompute_lgxx_stencil_1_65.read(/*ram type address*/ (lgxx_s1_x - -1) * 1 + (lgxx_s1_y - -1) * 61);
  return value_lgxx_stencil_hcompute_lgxx_stencil_61;
  return 0;
}

// # of bundles = 4
// hcompute_cim_stencil_read
//	lgxx_stencil_hcompute_cim_stencil_37
inline hw_uint<16> lgxx_stencil_hcompute_cim_stencil_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_hcompute_cim_stencil_37

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_hcompute_cim_stencil_37_res = lgxx_stencil_hcompute_cim_stencil_37_select(lgxx_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_hcompute_cim_stencil_37_res);
	return result;
}

// hcompute_lgxx_stencil_1_read
//	lgxx_stencil_hcompute_lgxx_stencil_1_65
inline hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_hcompute_lgxx_stencil_1_65

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_65_res = lgxx_stencil_hcompute_lgxx_stencil_1_65_select(lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_hcompute_lgxx_stencil_1_65_res);
	return result;
}

// hcompute_lgxx_stencil_1_write
//	lgxx_stencil_hcompute_lgxx_stencil_1_64
inline void lgxx_stencil_hcompute_lgxx_stencil_1_write_bundle_write(hw_uint<16>& hcompute_lgxx_stencil_1_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_64_res = hcompute_lgxx_stencil_1_write.extract<0, 15>();
	lgxx_stencil_hcompute_lgxx_stencil_1_64_write(lgxx_stencil_hcompute_lgxx_stencil_1_64_res, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
}

// hcompute_lgxx_stencil_write
//	lgxx_stencil_hcompute_lgxx_stencil_61
inline void lgxx_stencil_hcompute_lgxx_stencil_write_bundle_write(hw_uint<16>& hcompute_lgxx_stencil_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_61_res = hcompute_lgxx_stencil_write.extract<0, 15>();
	lgxx_stencil_hcompute_lgxx_stencil_61_write(lgxx_stencil_hcompute_lgxx_stencil_61_res, lgxx_stencil, root, lgxx_s0_y, lgxx_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lgxy_stencil_hcompute_lgxy_stencil_1_25_to_lgxy_stencil_hcompute_cim_stencil_38_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgxy_stencil_hcompute_lgxy_stencil_1_25_to_lgxy_stencil_hcompute_cim_stencil_38_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgxy_stencil_hcompute_lgxy_stencil_1_25_to_lgxy_stencil_hcompute_cim_stencil_38_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lgxy_stencil_hcompute_lgxy_stencil_24_to_lgxy_stencil_hcompute_lgxy_stencil_1_26_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgxy_stencil_hcompute_lgxy_stencil_24_to_lgxy_stencil_hcompute_lgxy_stencil_1_26_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgxy_stencil_hcompute_lgxy_stencil_24_to_lgxy_stencil_hcompute_lgxy_stencil_1_26_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lgxy_stencil_cache {
  // # of banks: 2
  lgxy_stencil_hcompute_lgxy_stencil_1_25_to_lgxy_stencil_hcompute_cim_stencil_38_cache lgxy_stencil_hcompute_lgxy_stencil_1_25_to_lgxy_stencil_hcompute_cim_stencil_38;
  lgxy_stencil_hcompute_lgxy_stencil_24_to_lgxy_stencil_hcompute_lgxy_stencil_1_26_cache lgxy_stencil_hcompute_lgxy_stencil_24_to_lgxy_stencil_hcompute_lgxy_stencil_1_26;
};



inline void lgxy_stencil_hcompute_lgxy_stencil_1_25_write(hw_uint<16>& lgxy_stencil_hcompute_lgxy_stencil_1_25, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_hcompute_lgxy_stencil_1_25_to_lgxy_stencil_hcompute_cim_stencil_38.write(lgxy_stencil_hcompute_lgxy_stencil_1_25, (lgxy_s1_x - -1) * 1 + (lgxy_s1_y - -1) * 61);
}

inline void lgxy_stencil_hcompute_lgxy_stencil_24_write(hw_uint<16>& lgxy_stencil_hcompute_lgxy_stencil_24, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_hcompute_lgxy_stencil_24_to_lgxy_stencil_hcompute_lgxy_stencil_1_26.write(lgxy_stencil_hcompute_lgxy_stencil_24, (lgxy_s0_x - -1) * 1 + (lgxy_s0_y - -1) * 61);
}

inline hw_uint<16> lgxy_stencil_hcompute_cim_stencil_38_select(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_stencil_hcompute_cim_stencil_38 read pattern: { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxy_stencil[cim_s0_x, cim_s0_y] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
  auto value_lgxy_stencil_hcompute_lgxy_stencil_1_25 = lgxy_stencil.lgxy_stencil_hcompute_lgxy_stencil_1_25_to_lgxy_stencil_hcompute_cim_stencil_38.read(/*ram type address*/ (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  return value_lgxy_stencil_hcompute_lgxy_stencil_1_25;
  return 0;
}

inline hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_26_select(lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_stencil_hcompute_lgxy_stencil_1_26 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lgxy_stencil[lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lgxy_stencil_hcompute_lgxy_stencil_24 = lgxy_stencil.lgxy_stencil_hcompute_lgxy_stencil_24_to_lgxy_stencil_hcompute_lgxy_stencil_1_26.read(/*ram type address*/ (lgxy_s1_x - -1) * 1 + (lgxy_s1_y - -1) * 61);
  return value_lgxy_stencil_hcompute_lgxy_stencil_24;
  return 0;
}

// # of bundles = 4
// hcompute_cim_stencil_read
//	lgxy_stencil_hcompute_cim_stencil_38
inline hw_uint<16> lgxy_stencil_hcompute_cim_stencil_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_hcompute_cim_stencil_38

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_hcompute_cim_stencil_38_res = lgxy_stencil_hcompute_cim_stencil_38_select(lgxy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_hcompute_cim_stencil_38_res);
	return result;
}

// hcompute_lgxy_stencil_1_read
//	lgxy_stencil_hcompute_lgxy_stencil_1_26
inline hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_hcompute_lgxy_stencil_1_26

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_26_res = lgxy_stencil_hcompute_lgxy_stencil_1_26_select(lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_hcompute_lgxy_stencil_1_26_res);
	return result;
}

// hcompute_lgxy_stencil_1_write
//	lgxy_stencil_hcompute_lgxy_stencil_1_25
inline void lgxy_stencil_hcompute_lgxy_stencil_1_write_bundle_write(hw_uint<16>& hcompute_lgxy_stencil_1_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_25_res = hcompute_lgxy_stencil_1_write.extract<0, 15>();
	lgxy_stencil_hcompute_lgxy_stencil_1_25_write(lgxy_stencil_hcompute_lgxy_stencil_1_25_res, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
}

// hcompute_lgxy_stencil_write
//	lgxy_stencil_hcompute_lgxy_stencil_24
inline void lgxy_stencil_hcompute_lgxy_stencil_write_bundle_write(hw_uint<16>& hcompute_lgxy_stencil_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_24_res = hcompute_lgxy_stencil_write.extract<0, 15>();
	lgxy_stencil_hcompute_lgxy_stencil_24_write(lgxy_stencil_hcompute_lgxy_stencil_24_res, lgxy_stencil, root, lgxy_s0_y, lgxy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lgyy_stencil_hcompute_lgyy_stencil_1_13_to_lgyy_stencil_hcompute_cim_stencil_39_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgyy_stencil_hcompute_lgyy_stencil_1_13_to_lgyy_stencil_hcompute_cim_stencil_39_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgyy_stencil_hcompute_lgyy_stencil_1_13_to_lgyy_stencil_hcompute_cim_stencil_39_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lgyy_stencil_hcompute_lgyy_stencil_12_to_lgyy_stencil_hcompute_lgyy_stencil_1_14_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgyy_stencil_hcompute_lgyy_stencil_12_to_lgyy_stencil_hcompute_lgyy_stencil_1_14_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgyy_stencil_hcompute_lgyy_stencil_12_to_lgyy_stencil_hcompute_lgyy_stencil_1_14_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lgyy_stencil_cache {
  // # of banks: 2
  lgyy_stencil_hcompute_lgyy_stencil_1_13_to_lgyy_stencil_hcompute_cim_stencil_39_cache lgyy_stencil_hcompute_lgyy_stencil_1_13_to_lgyy_stencil_hcompute_cim_stencil_39;
  lgyy_stencil_hcompute_lgyy_stencil_12_to_lgyy_stencil_hcompute_lgyy_stencil_1_14_cache lgyy_stencil_hcompute_lgyy_stencil_12_to_lgyy_stencil_hcompute_lgyy_stencil_1_14;
};



inline void lgyy_stencil_hcompute_lgyy_stencil_12_write(hw_uint<16>& lgyy_stencil_hcompute_lgyy_stencil_12, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_hcompute_lgyy_stencil_12_to_lgyy_stencil_hcompute_lgyy_stencil_1_14.write(lgyy_stencil_hcompute_lgyy_stencil_12, (lgyy_s0_x - -1) * 1 + (lgyy_s0_y - -1) * 61);
}

inline void lgyy_stencil_hcompute_lgyy_stencil_1_13_write(hw_uint<16>& lgyy_stencil_hcompute_lgyy_stencil_1_13, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_hcompute_lgyy_stencil_1_13_to_lgyy_stencil_hcompute_cim_stencil_39.write(lgyy_stencil_hcompute_lgyy_stencil_1_13, (lgyy_s1_x - -1) * 1 + (lgyy_s1_y - -1) * 61);
}

inline hw_uint<16> lgyy_stencil_hcompute_cim_stencil_39_select(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_stencil_hcompute_cim_stencil_39 read pattern: { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgyy_stencil[cim_s0_x, cim_s0_y] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
  auto value_lgyy_stencil_hcompute_lgyy_stencil_1_13 = lgyy_stencil.lgyy_stencil_hcompute_lgyy_stencil_1_13_to_lgyy_stencil_hcompute_cim_stencil_39.read(/*ram type address*/ (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  return value_lgyy_stencil_hcompute_lgyy_stencil_1_13;
  return 0;
}

inline hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_14_select(lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_stencil_hcompute_lgyy_stencil_1_14 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lgyy_stencil[lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lgyy_stencil_hcompute_lgyy_stencil_12 = lgyy_stencil.lgyy_stencil_hcompute_lgyy_stencil_12_to_lgyy_stencil_hcompute_lgyy_stencil_1_14.read(/*ram type address*/ (lgyy_s1_x - -1) * 1 + (lgyy_s1_y - -1) * 61);
  return value_lgyy_stencil_hcompute_lgyy_stencil_12;
  return 0;
}

// # of bundles = 4
// hcompute_cim_stencil_read
//	lgyy_stencil_hcompute_cim_stencil_39
inline hw_uint<16> lgyy_stencil_hcompute_cim_stencil_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_hcompute_cim_stencil_39

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_hcompute_cim_stencil_39_res = lgyy_stencil_hcompute_cim_stencil_39_select(lgyy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_hcompute_cim_stencil_39_res);
	return result;
}

// hcompute_lgyy_stencil_1_read
//	lgyy_stencil_hcompute_lgyy_stencil_1_14
inline hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_hcompute_lgyy_stencil_1_14

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_14_res = lgyy_stencil_hcompute_lgyy_stencil_1_14_select(lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_hcompute_lgyy_stencil_1_14_res);
	return result;
}

// hcompute_lgyy_stencil_1_write
//	lgyy_stencil_hcompute_lgyy_stencil_1_13
inline void lgyy_stencil_hcompute_lgyy_stencil_1_write_bundle_write(hw_uint<16>& hcompute_lgyy_stencil_1_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_13_res = hcompute_lgyy_stencil_1_write.extract<0, 15>();
	lgyy_stencil_hcompute_lgyy_stencil_1_13_write(lgyy_stencil_hcompute_lgyy_stencil_1_13_res, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
}

// hcompute_lgyy_stencil_write
//	lgyy_stencil_hcompute_lgyy_stencil_12
inline void lgyy_stencil_hcompute_lgyy_stencil_write_bundle_write(hw_uint<16>& hcompute_lgyy_stencil_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_12_res = hcompute_lgyy_stencil_write.extract<0, 15>();
	lgyy_stencil_hcompute_lgyy_stencil_12_write(lgyy_stencil_hcompute_lgyy_stencil_12_res, lgyy_stencil, root, lgyy_s0_y, lgyy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_66_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_66_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_66_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_67_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_67_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_67_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_68_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_68_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_68_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_69_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_69_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_69_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_70_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_70_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_70_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_71_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_71_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_71_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_72_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_72_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_72_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_73_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_73_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_73_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_74_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_74_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_74_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_cache {
  // # of banks: 9
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_66_cache lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_66;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_67_cache lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_67;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_68_cache lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_68;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_69_cache lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_69;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_70_cache lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_70;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_71_cache lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_71;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_72_cache lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_72;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_73_cache lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_73;
  lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_74_cache lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_74;
};



inline void lxx_stencil_hcompute_lxx_stencil_52_write(hw_uint<16>& lxx_stencil_hcompute_lxx_stencil_52, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_66.write(lxx_stencil_hcompute_lxx_stencil_52, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_67.write(lxx_stencil_hcompute_lxx_stencil_52, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_68.write(lxx_stencil_hcompute_lxx_stencil_52, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_69.write(lxx_stencil_hcompute_lxx_stencil_52, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_70.write(lxx_stencil_hcompute_lxx_stencil_52, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_71.write(lxx_stencil_hcompute_lxx_stencil_52, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_72.write(lxx_stencil_hcompute_lxx_stencil_52, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_73.write(lxx_stencil_hcompute_lxx_stencil_52, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_74.write(lxx_stencil_hcompute_lxx_stencil_52, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_66_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_66 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_x, -1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_52 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_66.read(/*ram type address*/ (-1 + lgxx_s1_x - -2) * 1 + (-1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_52;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_67_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_67 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_x, -1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_52 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_67.read(/*ram type address*/ (lgxx_s1_x - -2) * 1 + (-1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_52;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_68_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_68 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_x, -1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_52 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_68.read(/*ram type address*/ (1 + lgxx_s1_x - -2) * 1 + (-1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_52;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_69_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_69 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_52 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_69.read(/*ram type address*/ (-1 + lgxx_s1_x - -2) * 1 + (lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_52;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_70_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_70 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_52 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_70.read(/*ram type address*/ (lgxx_s1_x - -2) * 1 + (lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_52;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_71_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_71 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_52 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_71.read(/*ram type address*/ (1 + lgxx_s1_x - -2) * 1 + (lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_52;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_72_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_72 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_x, 1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_52 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_72.read(/*ram type address*/ (-1 + lgxx_s1_x - -2) * 1 + (1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_52;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_73_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_73 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_x, 1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_52 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_73.read(/*ram type address*/ (1 + lgxx_s1_x - -2) * 1 + (1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_52;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_74_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_74 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_x, 1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_52 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_52_to_lxx_stencil_hcompute_lgxx_stencil_1_74.read(/*ram type address*/ (lgxx_s1_x - -2) * 1 + (1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_52;
  return 0;
}

// # of bundles = 2
// hcompute_lgxx_stencil_1_read
//	lxx_stencil_hcompute_lgxx_stencil_1_66
//	lxx_stencil_hcompute_lgxx_stencil_1_67
//	lxx_stencil_hcompute_lgxx_stencil_1_68
//	lxx_stencil_hcompute_lgxx_stencil_1_69
//	lxx_stencil_hcompute_lgxx_stencil_1_70
//	lxx_stencil_hcompute_lgxx_stencil_1_71
//	lxx_stencil_hcompute_lgxx_stencil_1_72
//	lxx_stencil_hcompute_lgxx_stencil_1_73
//	lxx_stencil_hcompute_lgxx_stencil_1_74
inline hw_uint<144> lxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxx_stencil_hcompute_lgxx_stencil_1_66
    // lxx_stencil_hcompute_lgxx_stencil_1_67
    // lxx_stencil_hcompute_lgxx_stencil_1_68
    // lxx_stencil_hcompute_lgxx_stencil_1_69
    // lxx_stencil_hcompute_lgxx_stencil_1_70
    // lxx_stencil_hcompute_lgxx_stencil_1_71
    // lxx_stencil_hcompute_lgxx_stencil_1_72
    // lxx_stencil_hcompute_lgxx_stencil_1_73
    // lxx_stencil_hcompute_lgxx_stencil_1_74

	hw_uint<144> result;
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_66_res = lxx_stencil_hcompute_lgxx_stencil_1_66_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_66_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_67_res = lxx_stencil_hcompute_lgxx_stencil_1_67_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<16, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_67_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_68_res = lxx_stencil_hcompute_lgxx_stencil_1_68_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<32, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_68_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_69_res = lxx_stencil_hcompute_lgxx_stencil_1_69_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<48, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_69_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_70_res = lxx_stencil_hcompute_lgxx_stencil_1_70_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<64, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_70_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_71_res = lxx_stencil_hcompute_lgxx_stencil_1_71_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<80, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_71_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_72_res = lxx_stencil_hcompute_lgxx_stencil_1_72_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<96, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_72_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_73_res = lxx_stencil_hcompute_lgxx_stencil_1_73_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<112, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_73_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_74_res = lxx_stencil_hcompute_lgxx_stencil_1_74_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<128, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_74_res);
	return result;
}

// hcompute_lxx_stencil_write
//	lxx_stencil_hcompute_lxx_stencil_52
inline void lxx_stencil_hcompute_lxx_stencil_write_bundle_write(hw_uint<16>& hcompute_lxx_stencil_write, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
	hw_uint<16> lxx_stencil_hcompute_lxx_stencil_52_res = hcompute_lxx_stencil_write.extract<0, 15>();
	lxx_stencil_hcompute_lxx_stencil_52_write(lxx_stencil_hcompute_lxx_stencil_52_res, lxx_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_27_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_27_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_27_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_28_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_28_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_28_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_29_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_29_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_29_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_30_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_30_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_30_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_31_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_31_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_31_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_32_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_32_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_32_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_33_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_33_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_33_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_34_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_34_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_34_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_35_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_35_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_35_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_cache {
  // # of banks: 9
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_27_cache lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_27;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_28_cache lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_28;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_29_cache lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_29;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_30_cache lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_30;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_31_cache lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_31;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_32_cache lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_32;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_33_cache lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_33;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_34_cache lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_34;
  lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_35_cache lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_35;
};



inline void lxy_stencil_hcompute_lxy_stencil_7_write(hw_uint<16>& lxy_stencil_hcompute_lxy_stencil_7, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_27.write(lxy_stencil_hcompute_lxy_stencil_7, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_28.write(lxy_stencil_hcompute_lxy_stencil_7, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_29.write(lxy_stencil_hcompute_lxy_stencil_7, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_30.write(lxy_stencil_hcompute_lxy_stencil_7, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_31.write(lxy_stencil_hcompute_lxy_stencil_7, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_32.write(lxy_stencil_hcompute_lxy_stencil_7, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_33.write(lxy_stencil_hcompute_lxy_stencil_7, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_34.write(lxy_stencil_hcompute_lxy_stencil_7, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_35.write(lxy_stencil_hcompute_lxy_stencil_7, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_27_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_27 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_x, -1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_27.read(/*ram type address*/ (-1 + lgxy_s1_x - -2) * 1 + (-1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_28_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_28 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_x, -1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_28.read(/*ram type address*/ (lgxy_s1_x - -2) * 1 + (-1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_29_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_29 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_x, -1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_29.read(/*ram type address*/ (1 + lgxy_s1_x - -2) * 1 + (-1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_30_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_30 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_30.read(/*ram type address*/ (-1 + lgxy_s1_x - -2) * 1 + (lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_31_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_31 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_31.read(/*ram type address*/ (lgxy_s1_x - -2) * 1 + (lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_32_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_32 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_32.read(/*ram type address*/ (1 + lgxy_s1_x - -2) * 1 + (lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_33_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_33 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_x, 1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_33.read(/*ram type address*/ (-1 + lgxy_s1_x - -2) * 1 + (1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_34_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_34 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_x, 1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_34.read(/*ram type address*/ (1 + lgxy_s1_x - -2) * 1 + (1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_35_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_35 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_x, 1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_7_to_lxy_stencil_hcompute_lgxy_stencil_1_35.read(/*ram type address*/ (lgxy_s1_x - -2) * 1 + (1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_7;
  return 0;
}

// # of bundles = 2
// hcompute_lgxy_stencil_1_read
//	lxy_stencil_hcompute_lgxy_stencil_1_27
//	lxy_stencil_hcompute_lgxy_stencil_1_28
//	lxy_stencil_hcompute_lgxy_stencil_1_29
//	lxy_stencil_hcompute_lgxy_stencil_1_30
//	lxy_stencil_hcompute_lgxy_stencil_1_31
//	lxy_stencil_hcompute_lgxy_stencil_1_32
//	lxy_stencil_hcompute_lgxy_stencil_1_33
//	lxy_stencil_hcompute_lgxy_stencil_1_34
//	lxy_stencil_hcompute_lgxy_stencil_1_35
inline hw_uint<144> lxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxy_stencil_hcompute_lgxy_stencil_1_27
    // lxy_stencil_hcompute_lgxy_stencil_1_28
    // lxy_stencil_hcompute_lgxy_stencil_1_29
    // lxy_stencil_hcompute_lgxy_stencil_1_30
    // lxy_stencil_hcompute_lgxy_stencil_1_31
    // lxy_stencil_hcompute_lgxy_stencil_1_32
    // lxy_stencil_hcompute_lgxy_stencil_1_33
    // lxy_stencil_hcompute_lgxy_stencil_1_34
    // lxy_stencil_hcompute_lgxy_stencil_1_35

	hw_uint<144> result;
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_27_res = lxy_stencil_hcompute_lgxy_stencil_1_27_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_27_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_28_res = lxy_stencil_hcompute_lgxy_stencil_1_28_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<16, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_28_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_29_res = lxy_stencil_hcompute_lgxy_stencil_1_29_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<32, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_29_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_30_res = lxy_stencil_hcompute_lgxy_stencil_1_30_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<48, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_30_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_31_res = lxy_stencil_hcompute_lgxy_stencil_1_31_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<64, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_31_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_32_res = lxy_stencil_hcompute_lgxy_stencil_1_32_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<80, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_32_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_33_res = lxy_stencil_hcompute_lgxy_stencil_1_33_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<96, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_33_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_34_res = lxy_stencil_hcompute_lgxy_stencil_1_34_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<112, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_34_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_35_res = lxy_stencil_hcompute_lgxy_stencil_1_35_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<128, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_35_res);
	return result;
}

// hcompute_lxy_stencil_write
//	lxy_stencil_hcompute_lxy_stencil_7
inline void lxy_stencil_hcompute_lxy_stencil_write_bundle_write(hw_uint<16>& hcompute_lxy_stencil_write, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
	hw_uint<16> lxy_stencil_hcompute_lxy_stencil_7_res = hcompute_lxy_stencil_write.extract<0, 15>();
	lxy_stencil_hcompute_lxy_stencil_7_write(lxy_stencil_hcompute_lxy_stencil_7_res, lxy_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_15_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_15_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_15_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_16_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_16_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_16_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_17_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_17_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_17_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_18_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_18_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_18_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_19_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_19_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_19_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_20_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_20_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_20_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_21_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_21_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_21_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_22_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_22_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_22_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_23_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_23_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_23_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_cache {
  // # of banks: 9
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_15_cache lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_15;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_16_cache lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_16;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_17_cache lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_17;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_18_cache lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_18;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_19_cache lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_19;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_20_cache lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_20;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_21_cache lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_21;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_22_cache lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_22;
  lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_23_cache lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_23;
};



inline void lyy_stencil_hcompute_lyy_stencil_10_write(hw_uint<16>& lyy_stencil_hcompute_lyy_stencil_10, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_15.write(lyy_stencil_hcompute_lyy_stencil_10, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_16.write(lyy_stencil_hcompute_lyy_stencil_10, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_17.write(lyy_stencil_hcompute_lyy_stencil_10, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_18.write(lyy_stencil_hcompute_lyy_stencil_10, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_19.write(lyy_stencil_hcompute_lyy_stencil_10, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_20.write(lyy_stencil_hcompute_lyy_stencil_10, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_21.write(lyy_stencil_hcompute_lyy_stencil_10, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_22.write(lyy_stencil_hcompute_lyy_stencil_10, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_23.write(lyy_stencil_hcompute_lyy_stencil_10, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_15_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_15 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_x, -1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_10 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_15.read(/*ram type address*/ (-1 + lgyy_s1_x - -2) * 1 + (-1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_10;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_16_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_16 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_x, -1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_10 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_16.read(/*ram type address*/ (lgyy_s1_x - -2) * 1 + (-1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_10;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_17_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_17 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_x, -1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_10 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_17.read(/*ram type address*/ (1 + lgyy_s1_x - -2) * 1 + (-1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_10;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_18_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_18 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_10 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_18.read(/*ram type address*/ (-1 + lgyy_s1_x - -2) * 1 + (lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_10;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_19_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_19 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_10 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_19.read(/*ram type address*/ (lgyy_s1_x - -2) * 1 + (lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_10;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_20_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_20 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_10 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_20.read(/*ram type address*/ (1 + lgyy_s1_x - -2) * 1 + (lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_10;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_21_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_21 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_x, 1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_10 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_21.read(/*ram type address*/ (-1 + lgyy_s1_x - -2) * 1 + (1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_10;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_22_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_22 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_x, 1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_10 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_22.read(/*ram type address*/ (1 + lgyy_s1_x - -2) * 1 + (1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_10;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_23_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_23 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_x, 1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_10 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_10_to_lyy_stencil_hcompute_lgyy_stencil_1_23.read(/*ram type address*/ (lgyy_s1_x - -2) * 1 + (1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_10;
  return 0;
}

// # of bundles = 2
// hcompute_lgyy_stencil_1_read
//	lyy_stencil_hcompute_lgyy_stencil_1_15
//	lyy_stencil_hcompute_lgyy_stencil_1_16
//	lyy_stencil_hcompute_lgyy_stencil_1_17
//	lyy_stencil_hcompute_lgyy_stencil_1_18
//	lyy_stencil_hcompute_lgyy_stencil_1_19
//	lyy_stencil_hcompute_lgyy_stencil_1_20
//	lyy_stencil_hcompute_lgyy_stencil_1_21
//	lyy_stencil_hcompute_lgyy_stencil_1_22
//	lyy_stencil_hcompute_lgyy_stencil_1_23
inline hw_uint<144> lyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lyy_stencil_hcompute_lgyy_stencil_1_15
    // lyy_stencil_hcompute_lgyy_stencil_1_16
    // lyy_stencil_hcompute_lgyy_stencil_1_17
    // lyy_stencil_hcompute_lgyy_stencil_1_18
    // lyy_stencil_hcompute_lgyy_stencil_1_19
    // lyy_stencil_hcompute_lgyy_stencil_1_20
    // lyy_stencil_hcompute_lgyy_stencil_1_21
    // lyy_stencil_hcompute_lgyy_stencil_1_22
    // lyy_stencil_hcompute_lgyy_stencil_1_23

	hw_uint<144> result;
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_15_res = lyy_stencil_hcompute_lgyy_stencil_1_15_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_15_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_16_res = lyy_stencil_hcompute_lgyy_stencil_1_16_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<16, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_16_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_17_res = lyy_stencil_hcompute_lgyy_stencil_1_17_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<32, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_17_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_18_res = lyy_stencil_hcompute_lgyy_stencil_1_18_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<48, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_18_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_19_res = lyy_stencil_hcompute_lgyy_stencil_1_19_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<64, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_19_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_20_res = lyy_stencil_hcompute_lgyy_stencil_1_20_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<80, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_20_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_21_res = lyy_stencil_hcompute_lgyy_stencil_1_21_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<96, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_21_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_22_res = lyy_stencil_hcompute_lgyy_stencil_1_22_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<112, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_22_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_23_res = lyy_stencil_hcompute_lgyy_stencil_1_23_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<128, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_23_res);
	return result;
}

// hcompute_lyy_stencil_write
//	lyy_stencil_hcompute_lyy_stencil_10
inline void lyy_stencil_hcompute_lyy_stencil_write_bundle_write(hw_uint<16>& hcompute_lyy_stencil_write, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
	hw_uint<16> lyy_stencil_hcompute_lyy_stencil_10_res = hcompute_lyy_stencil_write.extract<0, 15>();
	lyy_stencil_hcompute_lyy_stencil_10_write(lyy_stencil_hcompute_lyy_stencil_10_res, lyy_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_55_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_55_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_55_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_56_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_56_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_56_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_57_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_57_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_57_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_58_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_58_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_58_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_59_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_59_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_59_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_60_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_60_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_60_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_1_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_1_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_2_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_2_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_2_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_3_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_3_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_3_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_4_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_4_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_4_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_5_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_5_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_5_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_6_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_6_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_6_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_cache {
  // # of banks: 12
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_55_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_55;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_56_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_56;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_57_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_57;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_58_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_58;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_59_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_59;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_60_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_60;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_1_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_1;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_2_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_2;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_3_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_3;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_4_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_4;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_5_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_5;
  padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_6_cache padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_6;
};



inline void padded16_stencil_hcompute_padded16_stencil_62_write(hw_uint<16>& padded16_stencil_hcompute_padded16_stencil_62, padded16_stencil_cache& padded16_stencil, int root, int padded16_s0_y, int padded16_s0_x, int dynamic_address) {
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_55.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_56.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_57.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_58.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_59.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_60.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_1.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_2.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_3.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_4.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_5.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_6.write(padded16_stencil_hcompute_padded16_stencil_62, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_55_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_55 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[1 + grad_x_s0_x, -1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_55.read(/*ram type address*/ (1 + grad_x_s0_x - -3) * 1 + (-1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_56_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_56 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[1 + grad_x_s0_x, 1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_56.read(/*ram type address*/ (1 + grad_x_s0_x - -3) * 1 + (1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_57_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_57 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[1 + grad_x_s0_x, grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_57.read(/*ram type address*/ (1 + grad_x_s0_x - -3) * 1 + (grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_58_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_58 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[-1 + grad_x_s0_x, -1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_58.read(/*ram type address*/ (-1 + grad_x_s0_x - -3) * 1 + (-1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_59_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_59 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[-1 + grad_x_s0_x, grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_59.read(/*ram type address*/ (-1 + grad_x_s0_x - -3) * 1 + (grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_60_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_60 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[-1 + grad_x_s0_x, 1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_x_stencil_60.read(/*ram type address*/ (-1 + grad_x_s0_x - -3) * 1 + (1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_1_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_1 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[-1 + grad_y_s0_x, -1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_1.read(/*ram type address*/ (-1 + grad_y_s0_x - -3) * 1 + (-1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_2_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_2 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[grad_y_s0_x, -1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_2.read(/*ram type address*/ (grad_y_s0_x - -3) * 1 + (-1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_3_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_3 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[1 + grad_y_s0_x, -1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_3.read(/*ram type address*/ (1 + grad_y_s0_x - -3) * 1 + (-1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_4_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_4 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[-1 + grad_y_s0_x, 1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_4.read(/*ram type address*/ (-1 + grad_y_s0_x - -3) * 1 + (1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_5_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_5 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[1 + grad_y_s0_x, 1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_5.read(/*ram type address*/ (1 + grad_y_s0_x - -3) * 1 + (1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_6_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_6 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[grad_y_s0_x, 1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_62 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_62_to_padded16_stencil_hcompute_grad_y_stencil_6.read(/*ram type address*/ (grad_y_s0_x - -3) * 1 + (1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_62;
  return 0;
}

// # of bundles = 3
// hcompute_grad_x_stencil_read
//	padded16_stencil_hcompute_grad_x_stencil_55
//	padded16_stencil_hcompute_grad_x_stencil_56
//	padded16_stencil_hcompute_grad_x_stencil_57
//	padded16_stencil_hcompute_grad_x_stencil_58
//	padded16_stencil_hcompute_grad_x_stencil_59
//	padded16_stencil_hcompute_grad_x_stencil_60
inline hw_uint<96> padded16_stencil_hcompute_grad_x_stencil_read_bundle_read(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_stencil_hcompute_grad_x_stencil_55
    // padded16_stencil_hcompute_grad_x_stencil_56
    // padded16_stencil_hcompute_grad_x_stencil_57
    // padded16_stencil_hcompute_grad_x_stencil_58
    // padded16_stencil_hcompute_grad_x_stencil_59
    // padded16_stencil_hcompute_grad_x_stencil_60

	hw_uint<96> result;
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_55_res = padded16_stencil_hcompute_grad_x_stencil_55_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_stencil_hcompute_grad_x_stencil_55_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_56_res = padded16_stencil_hcompute_grad_x_stencil_56_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_stencil_hcompute_grad_x_stencil_56_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_57_res = padded16_stencil_hcompute_grad_x_stencil_57_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_stencil_hcompute_grad_x_stencil_57_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_58_res = padded16_stencil_hcompute_grad_x_stencil_58_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_stencil_hcompute_grad_x_stencil_58_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_59_res = padded16_stencil_hcompute_grad_x_stencil_59_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_stencil_hcompute_grad_x_stencil_59_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_60_res = padded16_stencil_hcompute_grad_x_stencil_60_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_stencil_hcompute_grad_x_stencil_60_res);
	return result;
}

// hcompute_grad_y_stencil_read
//	padded16_stencil_hcompute_grad_y_stencil_1
//	padded16_stencil_hcompute_grad_y_stencil_2
//	padded16_stencil_hcompute_grad_y_stencil_3
//	padded16_stencil_hcompute_grad_y_stencil_4
//	padded16_stencil_hcompute_grad_y_stencil_5
//	padded16_stencil_hcompute_grad_y_stencil_6
inline hw_uint<96> padded16_stencil_hcompute_grad_y_stencil_read_bundle_read(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_stencil_hcompute_grad_y_stencil_1
    // padded16_stencil_hcompute_grad_y_stencil_2
    // padded16_stencil_hcompute_grad_y_stencil_3
    // padded16_stencil_hcompute_grad_y_stencil_4
    // padded16_stencil_hcompute_grad_y_stencil_5
    // padded16_stencil_hcompute_grad_y_stencil_6

	hw_uint<96> result;
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_1_res = padded16_stencil_hcompute_grad_y_stencil_1_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_stencil_hcompute_grad_y_stencil_1_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_2_res = padded16_stencil_hcompute_grad_y_stencil_2_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_stencil_hcompute_grad_y_stencil_2_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_3_res = padded16_stencil_hcompute_grad_y_stencil_3_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_stencil_hcompute_grad_y_stencil_3_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_4_res = padded16_stencil_hcompute_grad_y_stencil_4_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_stencil_hcompute_grad_y_stencil_4_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_5_res = padded16_stencil_hcompute_grad_y_stencil_5_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_stencil_hcompute_grad_y_stencil_5_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_6_res = padded16_stencil_hcompute_grad_y_stencil_6_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_stencil_hcompute_grad_y_stencil_6_res);
	return result;
}

// hcompute_padded16_stencil_write
//	padded16_stencil_hcompute_padded16_stencil_62
inline void padded16_stencil_hcompute_padded16_stencil_write_bundle_write(hw_uint<16>& hcompute_padded16_stencil_write, padded16_stencil_cache& padded16_stencil, int root, int padded16_s0_y, int padded16_s0_x, int dynamic_address) {
	hw_uint<16> padded16_stencil_hcompute_padded16_stencil_62_res = hcompute_padded16_stencil_write.extract<0, 15>();
	padded16_stencil_hcompute_padded16_stencil_62_write(padded16_stencil_hcompute_padded16_stencil_62_res, padded16_stencil, root, padded16_s0_y, padded16_s0_x, dynamic_address);
}



// Operation logic
inline void hcompute_grad_y_stencil(padded16_stencil_cache& padded16_stencil, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x) {
  // Dynamic address computation

	// Consume: padded16_stencil
	auto padded16_stencil__lp_grad_y_s0_x__p___m_1_rp__c___lp_grad_y_s0_y__p___m_1_rp__value = padded16_stencil_hcompute_grad_y_stencil_read_bundle_read(padded16_stencil/* source_delay */, root, grad_y_s0_y, grad_y_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_grad_y_stencil(padded16_stencil__lp_grad_y_s0_x__p___m_1_rp__c___lp_grad_y_s0_y__p___m_1_rp__value);
	// Produce: grad_y_stencil
	grad_y_stencil_hcompute_grad_y_stencil_write_bundle_write(/* arg names */compute_result, grad_y_stencil, root, grad_y_s0_y, grad_y_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lxy_stencil(grad_x_stencil_cache& grad_x_stencil, grad_y_stencil_cache& grad_y_stencil, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x) {
  // Dynamic address computation

	// Consume: grad_x_stencil
	auto grad_x_stencil_lxy_s0_x_c__lxy_s0_y_value = grad_x_stencil_hcompute_lxy_stencil_read_bundle_read(grad_x_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: grad_y_stencil
	auto grad_y_stencil_lxy_s0_x_c__lxy_s0_y_value = grad_y_stencil_hcompute_lxy_stencil_read_bundle_read(grad_y_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lxy_stencil(grad_x_stencil_lxy_s0_x_c__lxy_s0_y_value, grad_y_stencil_lxy_s0_x_c__lxy_s0_y_value);
	// Produce: lxy_stencil
	lxy_stencil_hcompute_lxy_stencil_write_bundle_write(/* arg names */compute_result, lxy_stencil, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lyy_stencil(grad_y_stencil_cache& grad_y_stencil, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x) {
  // Dynamic address computation

	// Consume: grad_y_stencil
	auto grad_y_stencil_lyy_s0_x_c__lyy_s0_y_value = grad_y_stencil_hcompute_lyy_stencil_read_bundle_read(grad_y_stencil/* source_delay */, root, lyy_s0_y, lyy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lyy_stencil(grad_y_stencil_lyy_s0_x_c__lyy_s0_y_value);
	// Produce: lyy_stencil
	lyy_stencil_hcompute_lyy_stencil_write_bundle_write(/* arg names */compute_result, lyy_stencil, root, lyy_s0_y, lyy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgyy_stencil(lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s0_y, int lgyy_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgyy_stencil();
	// Produce: lgyy_stencil
	lgyy_stencil_hcompute_lgyy_stencil_write_bundle_write(/* arg names */compute_result, lgyy_stencil, root, lgyy_s0_y, lgyy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgyy_stencil_1(lgyy_stencil_cache& lgyy_stencil, lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x) {
  // Dynamic address computation

	// Consume: lgyy_stencil
	auto lgyy_stencil_lgyy_s1_x_c__lgyy_s1_y_value = lgyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lgyy_stencil/* source_delay */, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lyy_stencil
	auto lyy_stencil__lp_lgyy_s1_x__p___m_1_rp__c___lp_lgyy_s1_y__p___m_1_rp__value = lyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lyy_stencil/* source_delay */, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lgyy_stencil_1(lgyy_stencil_lgyy_s1_x_c__lgyy_s1_y_value, lyy_stencil__lp_lgyy_s1_x__p___m_1_rp__c___lp_lgyy_s1_y__p___m_1_rp__value);
	// Produce: lgyy_stencil
	lgyy_stencil_hcompute_lgyy_stencil_1_write_bundle_write(/* arg names */compute_result, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgxy_stencil(lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s0_y, int lgxy_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxy_stencil();
	// Produce: lgxy_stencil
	lgxy_stencil_hcompute_lgxy_stencil_write_bundle_write(/* arg names */compute_result, lgxy_stencil, root, lgxy_s0_y, lgxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgxy_stencil_1(lgxy_stencil_cache& lgxy_stencil, lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x) {
  // Dynamic address computation

	// Consume: lgxy_stencil
	auto lgxy_stencil_lgxy_s1_x_c__lgxy_s1_y_value = lgxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lgxy_stencil/* source_delay */, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lxy_stencil
	auto lxy_stencil__lp_lgxy_s1_x__p___m_1_rp__c___lp_lgxy_s1_y__p___m_1_rp__value = lxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lxy_stencil/* source_delay */, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lgxy_stencil_1(lgxy_stencil_lgxy_s1_x_c__lgxy_s1_y_value, lxy_stencil__lp_lgxy_s1_x__p___m_1_rp__c___lp_lgxy_s1_y__p___m_1_rp__value);
	// Produce: lgxy_stencil
	lgxy_stencil_hcompute_lgxy_stencil_1_write_bundle_write(/* arg names */compute_result, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_cim_stencil(lgxx_stencil_cache& lgxx_stencil, lgxy_stencil_cache& lgxy_stencil, lgyy_stencil_cache& lgyy_stencil, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil
	auto lgxx_stencil_cim_s0_x_c__cim_s0_y_value = lgxx_stencil_hcompute_cim_stencil_read_bundle_read(lgxx_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lgxy_stencil
	auto lgxy_stencil_cim_s0_x_c__cim_s0_y_value = lgxy_stencil_hcompute_cim_stencil_read_bundle_read(lgxy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lgyy_stencil
	auto lgyy_stencil_cim_s0_x_c__cim_s0_y_value = lgyy_stencil_hcompute_cim_stencil_read_bundle_read(lgyy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_cim_stencil(lgxx_stencil_cim_s0_x_c__cim_s0_y_value, lgxy_stencil_cim_s0_x_c__cim_s0_y_value, lgyy_stencil_cim_s0_x_c__cim_s0_y_value);
	// Produce: cim_stencil
	cim_stencil_hcompute_cim_stencil_write_bundle_write(/* arg names */compute_result, cim_stencil, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_cim_output_stencil(cim_stencil_cache& cim_stencil, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x) {
  // Dynamic address computation

	// Consume: cim_stencil
	auto cim_stencil__lp_cim_output_s0_x__p___m_1_rp__c___lp_cim_output_s0_y__p___m_1_rp__value = cim_stencil_hcompute_cim_output_stencil_read_bundle_read(cim_stencil/* source_delay */, root, cim_output_s0_y, cim_output_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_cim_output_stencil(cim_stencil__lp_cim_output_s0_x__p___m_1_rp__c___lp_cim_output_s0_y__p___m_1_rp__value);
	// Produce: cim_output_stencil
	cim_output_stencil_hcompute_cim_output_stencil_write_bundle_write(/* arg names */compute_result, cim_output_stencil, root, cim_output_s0_y, cim_output_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_hw_output_stencil(cim_output_stencil_cache& cim_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: cim_output_stencil
	auto cim_output_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value = cim_output_stencil_hcompute_hw_output_stencil_read_bundle_read(cim_output_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(cim_output_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lxx_stencil(grad_x_stencil_cache& grad_x_stencil, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x) {
  // Dynamic address computation

	// Consume: grad_x_stencil
	auto grad_x_stencil_lxx_s0_x_c__lxx_s0_y_value = grad_x_stencil_hcompute_lxx_stencil_read_bundle_read(grad_x_stencil/* source_delay */, root, lxx_s0_y, lxx_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lxx_stencil(grad_x_stencil_lxx_s0_x_c__lxx_s0_y_value);
	// Produce: lxx_stencil
	lxx_stencil_hcompute_lxx_stencil_write_bundle_write(/* arg names */compute_result, lxx_stencil, root, lxx_s0_y, lxx_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_grad_x_stencil(padded16_stencil_cache& padded16_stencil, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x) {
  // Dynamic address computation

	// Consume: padded16_stencil
	auto padded16_stencil__lp_grad_x_s0_x__p__1_rp__c___lp_grad_x_s0_y__p___m_1_rp__value = padded16_stencil_hcompute_grad_x_stencil_read_bundle_read(padded16_stencil/* source_delay */, root, grad_x_s0_y, grad_x_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_grad_x_stencil(padded16_stencil__lp_grad_x_s0_x__p__1_rp__c___lp_grad_x_s0_y__p___m_1_rp__value);
	// Produce: grad_x_stencil
	grad_x_stencil_hcompute_grad_x_stencil_write_bundle_write(/* arg names */compute_result, grad_x_stencil, root, grad_x_s0_y, grad_x_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgxx_stencil(lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s0_y, int lgxx_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxx_stencil();
	// Produce: lgxx_stencil
	lgxx_stencil_hcompute_lgxx_stencil_write_bundle_write(/* arg names */compute_result, lgxx_stencil, root, lgxx_s0_y, lgxx_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_padded16_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_copy_stencil, padded16_stencil_cache& padded16_stencil, int root, int padded16_s0_y, int padded16_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_copy_stencil
	auto hw_input_copy_stencil_padded16_s0_x_c__padded16_s0_y_value = hw_input_copy_stencil.read();
	auto compute_result = hcompute_padded16_stencil(hw_input_copy_stencil_padded16_s0_x_c__padded16_s0_y_value);
	// Produce: padded16_stencil
	padded16_stencil_hcompute_padded16_stencil_write_bundle_write(/* arg names */compute_result, padded16_stencil, root, padded16_s0_y, padded16_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgxx_stencil_1(lgxx_stencil_cache& lgxx_stencil, lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil
	auto lgxx_stencil_lgxx_s1_x_c__lgxx_s1_y_value = lgxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lgxx_stencil/* source_delay */, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lxx_stencil
	auto lxx_stencil__lp_lgxx_s1_x__p___m_1_rp__c___lp_lgxx_s1_y__p___m_1_rp__value = lxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lxx_stencil/* source_delay */, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lgxx_stencil_1(lgxx_stencil_lgxx_s1_x_c__lgxx_s1_y_value, lxx_stencil__lp_lgxx_s1_x__p___m_1_rp__c___lp_lgxx_s1_y__p___m_1_rp__value);
	// Produce: lgxx_stencil
	lgxx_stencil_hcompute_lgxx_stencil_1_write_bundle_write(/* arg names */compute_result, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_harris(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_harris_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  cim_output_stencil_cache cim_output_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  cim_stencil_cache cim_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  grad_x_stencil_cache grad_x_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  grad_y_stencil_cache grad_y_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxx_stencil_cache lgxx_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxy_stencil_cache lgxy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgyy_stencil_cache lgyy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lxx_stencil_cache lxx_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lxy_stencil_cache lxy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lyy_stencil_cache lyy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  padded16_stencil_cache padded16_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> [0, 0, 1, grad_x_s0_y, 0, grad_x_s0_x, 0] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61; hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 14, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57; hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> [0, 0, 2, lxx_s0_y, 0, lxx_s0_x, 0] : -2 <= lxx_s0_y <= 61 and -2 <= lxx_s0_x <= 61; hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> [0, 0, 13, cim_output_s0_y, 0, cim_output_s0_x, 0] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57; hcompute_lgyy_stencil[root = 0, lgyy_s0_y, lgyy_s0_x] -> [0, 0, 10, lgyy_s0_y, 0, lgyy_s0_x, 0] : -1 <= lgyy_s0_y <= 59 and -1 <= lgyy_s0_x <= 59; hcompute_lgxy_stencil[root = 0, lgxy_s0_y, lgxy_s0_x] -> [0, 0, 7, lgxy_s0_y, 0, lgxy_s0_x, 0] : -1 <= lgxy_s0_y <= 59 and -1 <= lgxy_s0_x <= 59; hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> [0, 0, 11, lgyy_s1_y, 0, lgyy_s1_x, 0] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59; hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> [0, 0, 4, lgxx_s1_y, 0, lgxx_s1_x, 0] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59; hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> [0, 0, 12, cim_s0_y, 0, cim_s0_x, 0] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59; hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> [0, 0, 6, lxy_s0_y, 0, lxy_s0_x, 0] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61; hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> [0, 0, 5, grad_y_s0_y, 0, grad_y_s0_x, 0] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61; hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> [0, 0, 8, lgxy_s1_y, 0, lgxy_s1_x, 0] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59; hcompute_lgxx_stencil[root = 0, lgxx_s0_y, lgxx_s0_x] -> [0, 0, 3, lgxx_s0_y, 0, lgxx_s0_x, 0] : -1 <= lgxx_s0_y <= 59 and -1 <= lgxx_s0_x <= 59; hcompute_padded16_stencil[root = 0, padded16_s0_y, padded16_s0_x] -> [0, 0, 0, padded16_s0_y, 0, padded16_s0_x, 0] : -3 <= padded16_s0_y <= 63 and -3 <= padded16_s0_x <= 63; hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> [0, 0, 9, lyy_s0_y, 0, lyy_s0_x, 0] : -2 <= lyy_s0_y <= 61 and -2 <= lyy_s0_x <= 61 }
//   { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> [0, 0, 1, grad_x_s0_y, 0, grad_x_s0_x, 0] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
// Condition for hcompute_grad_x_stencil(((i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))
//   { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 14, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
// Condition for hcompute_hw_output_stencil(((i6 == 0) && (i4 == 0) && (-14 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (57 - i3 >= 0) && (i5 >= 0) && (57 - i5 >= 0)))
//   { hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> [0, 0, 2, lxx_s0_y, 0, lxx_s0_x, 0] : -2 <= lxx_s0_y <= 61 and -2 <= lxx_s0_x <= 61 }
// Condition for hcompute_lxx_stencil(((i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))
//   { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> [0, 0, 13, cim_output_s0_y, 0, cim_output_s0_x, 0] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
// Condition for hcompute_cim_output_stencil(((i6 == 0) && (i4 == 0) && (-13 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (57 - i3 >= 0) && (i5 >= 0) && (57 - i5 >= 0)))
//   { hcompute_lgyy_stencil[root = 0, lgyy_s0_y, lgyy_s0_x] -> [0, 0, 10, lgyy_s0_y, 0, lgyy_s0_x, 0] : -1 <= lgyy_s0_y <= 59 and -1 <= lgyy_s0_x <= 59 }
// Condition for hcompute_lgyy_stencil(((i6 == 0) && (i4 == 0) && (-10 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lgxy_stencil[root = 0, lgxy_s0_y, lgxy_s0_x] -> [0, 0, 7, lgxy_s0_y, 0, lgxy_s0_x, 0] : -1 <= lgxy_s0_y <= 59 and -1 <= lgxy_s0_x <= 59 }
// Condition for hcompute_lgxy_stencil(((i6 == 0) && (i4 == 0) && (-7 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> [0, 0, 11, lgyy_s1_y, 0, lgyy_s1_x, 0] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
// Condition for hcompute_lgyy_stencil_1(((i6 == 0) && (i4 == 0) && (-11 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> [0, 0, 4, lgxx_s1_y, 0, lgxx_s1_x, 0] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
// Condition for hcompute_lgxx_stencil_1(((i6 == 0) && (i4 == 0) && (-4 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> [0, 0, 12, cim_s0_y, 0, cim_s0_x, 0] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
// Condition for hcompute_cim_stencil(((i6 == 0) && (i4 == 0) && (-12 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> [0, 0, 6, lxy_s0_y, 0, lxy_s0_x, 0] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61 }
// Condition for hcompute_lxy_stencil(((i6 == 0) && (i4 == 0) && (-6 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))
//   { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> [0, 0, 5, grad_y_s0_y, 0, grad_y_s0_x, 0] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
// Condition for hcompute_grad_y_stencil(((i6 == 0) && (i4 == 0) && (-5 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))
//   { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> [0, 0, 8, lgxy_s1_y, 0, lgxy_s1_x, 0] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
// Condition for hcompute_lgxy_stencil_1(((i6 == 0) && (i4 == 0) && (-8 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lgxx_stencil[root = 0, lgxx_s0_y, lgxx_s0_x] -> [0, 0, 3, lgxx_s0_y, 0, lgxx_s0_x, 0] : -1 <= lgxx_s0_y <= 59 and -1 <= lgxx_s0_x <= 59 }
// Condition for hcompute_lgxx_stencil(((i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_padded16_stencil[root = 0, padded16_s0_y, padded16_s0_x] -> [0, 0, 0, padded16_s0_y, 0, padded16_s0_x, 0] : -3 <= padded16_s0_y <= 63 and -3 <= padded16_s0_x <= 63 }
// Condition for hcompute_padded16_stencil(((i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (3 + i3 >= 0) && (63 - i3 >= 0) && (3 + i5 >= 0) && (63 - i5 >= 0)))
//   { hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> [0, 0, 9, lyy_s0_y, 0, lyy_s0_x, 0] : -2 <= lyy_s0_y <= 61 and -2 <= lyy_s0_x <= 61 }
// Condition for hcompute_lyy_stencil(((i6 == 0) && (i4 == 0) && (-9 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))

  /*
{
  for (int c3 = -3; c3 <= 63; c3 += 1)
    for (int c5 = -3; c5 <= 63; c5 += 1)
      hcompute_padded16_stencil(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_grad_x_stencil(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_lxx_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgxx_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgxx_stencil_1(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_grad_y_stencil(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_lxy_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgxy_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgxy_stencil_1(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_lyy_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgyy_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgyy_stencil_1(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_cim_stencil(0, c3, c5);
  for (int c3 = 0; c3 <= 57; c3 += 1)
    for (int c5 = 0; c5 <= 57; c5 += 1)
      hcompute_cim_output_stencil(0, c3, c5);
  for (int c3 = 0; c3 <= 57; c3 += 1)
    for (int c5 = 0; c5 <= 57; c5 += 1)
      hcompute_hw_output_stencil(0, c3, c5);
}

  */
	{
	  for (int c3 = -3; c3 <= 63; c3 += 1)
	    for (int c5 = -3; c5 <= 63; c5 += 1)
	      hcompute_padded16_stencil(hw_input_copy_stencil /* buf name */, padded16_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_grad_x_stencil(padded16_stencil /* buf name */, grad_x_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_lxx_stencil(grad_x_stencil /* buf name */, lxx_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgxx_stencil(lgxx_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgxx_stencil_1(lgxx_stencil /* buf name */, lxx_stencil /* buf name */, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_grad_y_stencil(padded16_stencil /* buf name */, grad_y_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_lxy_stencil(grad_x_stencil /* buf name */, grad_y_stencil /* buf name */, lxy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgxy_stencil(lgxy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgxy_stencil_1(lgxy_stencil /* buf name */, lxy_stencil /* buf name */, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_lyy_stencil(grad_y_stencil /* buf name */, lyy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgyy_stencil(lgyy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgyy_stencil_1(lgyy_stencil /* buf name */, lyy_stencil /* buf name */, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_cim_stencil(lgxx_stencil /* buf name */, lgxy_stencil /* buf name */, lgyy_stencil /* buf name */, cim_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 57; c3 += 1)
	    for (int c5 = 0; c5 <= 57; c5 += 1)
	      hcompute_cim_output_stencil(cim_stencil /* buf name */, cim_output_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 57; c3 += 1)
	    for (int c5 = 0; c5 <= 57; c5 += 1)
	      hcompute_hw_output_stencil(cim_output_stencil /* buf name */, hw_output_stencil, 0, c3, c5);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_harris_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_harris(hw_input_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { hcompute_padded16_stencil[root = 0, padded16_s0_y, padded16_s0_x] -> hw_input_copy_stencil[padded16_s0_x, padded16_s0_y] : -3 <= padded16_s0_y <= 63 and -3 <= padded16_s0_x <= 63 }
const int hcompute_padded16_stencil_read_pipe0_num_transfers = 4489;
  // { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
const int hcompute_hw_output_stencil_write_pipe0_num_transfers = 3364;


extern "C" {

void unoptimized_harris_accel(hw_uint<16>* hcompute_padded16_stencil_read_pipe0, hw_uint<16>* hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = hcompute_padded16_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = hcompute_padded16_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > hcompute_padded16_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(hcompute_padded16_stencil_read_pipe0, hcompute_padded16_stencil_read_pipe0_channel, hcompute_padded16_stencil_read_pipe0_num_transfers*size);

  unoptimized_harris_wrapper(hcompute_padded16_stencil_read_pipe0_channel, hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(hcompute_hw_output_stencil_write_pipe0, hcompute_hw_output_stencil_write_pipe0_channel, hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
#endif //__VIVADO_SYNTH__

