/*
 * Copyright (c) 2020 John M. Jones
 *
 * The MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>
#include <crypto/private_key.hpp>
#include <net/peer.hpp>
#include <storage/peer_store.hpp>
#include <net/swarm.hpp>
#include <net/dialer.hpp>

using namespace libp2p;

BOOST_AUTO_TEST_CASE( dialer_new_test )
{
   crypto::PrivateKey<crypto::RSAPrivateKey> private_key;
   net::Peer peer;
   storage::PeerStore peer_store;
   net::Swarm swarm;
   net::Dialer dialer(peer, peer_store, private_key, swarm);
}