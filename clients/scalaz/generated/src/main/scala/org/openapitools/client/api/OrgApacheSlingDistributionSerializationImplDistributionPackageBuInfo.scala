package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfo._

case class OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties])

object OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfo {
  import DateTimeCodecs._

  implicit val OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfoCodecJson: CodecJson[OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfo] = CodecJson.derive[OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfo]
  implicit val OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfoDecoder: EntityDecoder[OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfo] = jsonOf[OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfo]
  implicit val OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfoEncoder: EntityEncoder[OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfo] = jsonEncoderOf[OrgApacheSlingDistributionSerializationImplDistributionPackageBuInfo]
}
