Shared Libraries
================

## shiabitconsensus

The purpose of this library is to make the verification functionality that is critical to Shiabit's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `shiabitconsensus.h` located in  `src/script/shiabitconsensus.h`.

#### Version

`shiabitconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`shiabitconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `shiabitconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `shiabitconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `shiabitconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/shiabit/bips/blob/master/bip-0016.mediawiki)) subscripts
- `shiabitconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/shiabit/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `shiabitconsensus_ERR_OK` - No errors with input parameters *(see the return value of `shiabitconsensus_verify_script` for the verification status)*
- `shiabitconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `shiabitconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `shiabitconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NShiabit](https://github.com/NicolasDorier/NShiabit/blob/master/NShiabit/Script.cs#L814) (.NET Bindings)
- [node-libshiabitconsensus](https://github.com/bitpay/node-libshiabitconsensus) (Node.js Bindings)
- [java-libshiabitconsensus](https://github.com/dexX7/java-libshiabitconsensus) (Java Bindings)
- [shiabitconsensus-php](https://github.com/Bit-Wasp/shiabitconsensus-php) (PHP Bindings)
