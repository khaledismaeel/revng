#!/usr/bin/env python3
#
# This file is distributed under the MIT License. See LICENSE.md for details.
#

import argparse

import yaml

argparser = argparse.ArgumentParser()
argparser.add_argument("schema", help="YAML schema")
argparser.add_argument("output_dir", help="Output to this directory")


def main(args):
    with open(args.schema, encoding="utf-8") as f:
        raw_schema = yaml.safe_load(f)

    print(f"{args.output_dir}/ForwardDecls.h", end=";")

    for definition in raw_schema:
        print(f"{args.output_dir}/Early/{definition['name']}.h", end=";")
        print(f"{args.output_dir}/Late/{definition['name']}.h", end=";")

    print(f"{args.output_dir}/Impl.cpp", end="")


if __name__ == "__main__":
    parsed_args = argparser.parse_args()
    main(parsed_args)
