package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfo._

case class OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties])

object OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfo {
  import DateTimeCodecs._

  implicit val OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfoCodecJson: CodecJson[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfo] = CodecJson.derive[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfo]
  implicit val OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfoDecoder: EntityDecoder[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfo] = jsonOf[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfo]
  implicit val OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfoEncoder: EntityEncoder[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfo] = jsonEncoderOf[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckInfo]
}