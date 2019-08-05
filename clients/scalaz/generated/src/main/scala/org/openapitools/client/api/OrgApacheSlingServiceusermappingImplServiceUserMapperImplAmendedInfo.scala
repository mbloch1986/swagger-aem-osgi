package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo._

case class OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties])

object OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo {
  import DateTimeCodecs._

  implicit val OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoCodecJson: CodecJson[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo] = CodecJson.derive[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo]
  implicit val OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoDecoder: EntityDecoder[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo] = jsonOf[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo]
  implicit val OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoEncoder: EntityEncoder[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo] = jsonEncoderOf[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo]
}