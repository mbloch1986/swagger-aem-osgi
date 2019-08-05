package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplRenditionMakerImplInfo._

case class ComDayCqDamCoreImplRenditionMakerImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqDamCoreImplRenditionMakerImplProperties])

object ComDayCqDamCoreImplRenditionMakerImplInfo {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplRenditionMakerImplInfoCodecJson: CodecJson[ComDayCqDamCoreImplRenditionMakerImplInfo] = CodecJson.derive[ComDayCqDamCoreImplRenditionMakerImplInfo]
  implicit val ComDayCqDamCoreImplRenditionMakerImplInfoDecoder: EntityDecoder[ComDayCqDamCoreImplRenditionMakerImplInfo] = jsonOf[ComDayCqDamCoreImplRenditionMakerImplInfo]
  implicit val ComDayCqDamCoreImplRenditionMakerImplInfoEncoder: EntityEncoder[ComDayCqDamCoreImplRenditionMakerImplInfo] = jsonEncoderOf[ComDayCqDamCoreImplRenditionMakerImplInfo]
}