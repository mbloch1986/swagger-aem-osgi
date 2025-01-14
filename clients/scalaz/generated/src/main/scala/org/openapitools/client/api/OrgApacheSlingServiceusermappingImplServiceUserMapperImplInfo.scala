package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo._

case class OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo {
  import DateTimeCodecs._

  implicit val OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfoCodecJson: CodecJson[OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo] = CodecJson.derive[OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo]
  implicit val OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfoDecoder: EntityDecoder[OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo] = jsonOf[OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo]
  implicit val OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfoEncoder: EntityEncoder[OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo] = jsonEncoderOf[OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo]
}
