func senc(Bitstring, SharedKey, Nonce): Bitstring
		reduc forall m: Bitstring, k: SharedKey, n: Nonce;
			sdec(sec(m, k, n), k) = m

