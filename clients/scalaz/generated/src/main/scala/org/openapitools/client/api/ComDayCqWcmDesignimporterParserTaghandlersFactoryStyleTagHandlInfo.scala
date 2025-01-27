package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfo._

case class ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlProperties])

object ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfo {
  import DateTimeCodecs._

  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfoCodecJson: CodecJson[ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfo] = CodecJson.derive[ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfo]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfoDecoder: EntityDecoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfo] = jsonOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfo]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfoEncoder: EntityEncoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfo] = jsonEncoderOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryStyleTagHandlInfo]
}
