package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfo._

case class OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerProperties])

object OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfo {
  import DateTimeCodecs._

  implicit val OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfoCodecJson: CodecJson[OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfo] = CodecJson.derive[OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfo]
  implicit val OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfoDecoder: EntityDecoder[OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfo] = jsonOf[OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfo]
  implicit val OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfoEncoder: EntityEncoder[OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfo] = jsonEncoderOf[OrgApacheSlingDistributionTriggerImplJcrEventDistributionTriggerInfo]
}
